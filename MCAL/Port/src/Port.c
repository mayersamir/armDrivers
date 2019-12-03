/*
 * Port.c
 *
 *  Created on: Nov 30, 2019
 *      Author: AVE-LAP-070
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "Port_Interface.h"
#include "Port_Private.h"
#include "Port_Lcfg.h"
#include "GInterrupt.h"




void PORT_init(void)
{

//    EnablePrivilegedMode();

    //ENTER_SUPERVISED();

    uint8 i;
    Port_IdType PortId;
    Port_ChIdType ChId;
    volatile PORT_RegType* PORT_Addr;
    for (i = 0; i < PORT_NUM_OF_ACTIVATED_CH; ++i)
    {
        PortId = (Port_IdType)(PortCfgArr[i].Channel/ MAX_NUM_OF_CH_IN_PORT);
        ChId = (Port_ChIdType)(PortCfgArr[i].Channel % MAX_NUM_OF_CH_IN_PORT);

        switch (PortId)
        {
        case Port_Id_A:
            PORT_Addr = PORTA_REG;
            break;
        case Port_Id_B:
            PORT_Addr = PORTB_REG;
            break;
        case Port_Id_C:
            PORT_Addr = PORTC_REG;
            break;
        case Port_Id_D:
            PORT_Addr = PORTD_REG;
            break;
        case Port_Id_E:
            PORT_Addr = PORTE_REG;
            break;
        case Port_Id_F:
            PORT_Addr = PORTF_REG;
            break;
        }

        /* set channel direction */
        if(PortCfgArr[i].Dir == port_Dir_Output)
        {
            SET_BIT(PORT_Addr->GPIODIR, ChId);
        }
        else
        {
            CLEAR_BIT(PORT_Addr->GPIODIR, ChId);
        }

        /* set channel mode */
        if(PortCfgArr[i].Mode == PORT_MODE_PIN_X_DIO)
        {
            CLEAR_BIT(PORT_Addr->GPIOAFSEL, ChId);
        }
        else
        {
            SET_BIT(PORT_Addr->GPIOAFSEL, ChId);

            PORT_Addr->GPIOPCTL |= ( PortCfgArr[i].Mode << (ChId*4) );
        }

        /* set Interrupt configuration */
        if(PortCfgArr[i].Interrupt == Port_IntDisable)
        {
            CLEAR_BIT(PORT_Addr->GPIOIM, ChId);
        }
        else
        {
            CLEAR_BIT(PORT_Addr->GPIOIM, ChId);
            if(PortCfgArr[i].Interrupt == Port_IntRisingEdge)
            {
                SET_BIT(PORT_Addr->GPIOIEV,ChId);
            }
            else if(PortCfgArr[i].Interrupt == Port_IntFallingEdge)
            {
                CLEAR_BIT(PORT_Addr->GPIOIEV,ChId);
            }
            else if(PortCfgArr[i].Interrupt == Port_IntBothEdges)
            {
                SET_BIT(PORT_Addr->GPIOIBE,ChId);
            }
            SET_BIT(PORT_Addr->GPIOIM, ChId);
        }

        /* set Internal Attachment configuration */
        if(PortCfgArr[i].AttachedRes == Port_InternalAttach_PullUpRes)
        {
            SET_BIT(PORT_Addr->GPIOPUR,ChId);
        }else if(PortCfgArr[i].AttachedRes == Port_InternalAttach_PullDownRes)
        {
            SET_BIT(PORT_Addr->GPIOPDR,ChId);
        }else if(PortCfgArr[i].AttachedRes == Port_InternalAttach_OpenDrain)
        {
            SET_BIT(PORT_Addr->GPIOODR,ChId);
        }

        /*set current strength configuration */
        if(PortCfgArr[i].CurrentDrive == Port_CurrDrive_2mA)
        {
            SET_BIT(PORT_Addr->GPIODR2R,ChId);
        }else if(PortCfgArr[i].CurrentDrive == Port_CurrDrive_4mA)
        {
            SET_BIT(PORT_Addr->GPIODR4R,ChId);
        }else if(PortCfgArr[i].CurrentDrive == Port_CurrDrive_8mA)
        {
            SET_BIT(PORT_Addr->GPIODR8R,ChId);
        }

        if(PortCfgArr[i].Mode != Port_Mode_AIN )
        {
            /* enable digital */
            SET_BIT(PORT_Addr->GPIODEN,ChId);
            /*disable ADC */
            CLEAR_BIT(PORT_Addr->GPIOADCCTL,ChId);
        }
        else
        {
            /* disable digital */
            CLEAR_BIT(PORT_Addr->GPIODEN,ChId);
            /* enable ADC */
            SET_BIT(PORT_Addr->GPIOADCCTL,ChId);
        }
    }


    return ;

}


