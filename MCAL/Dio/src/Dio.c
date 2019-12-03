/*
 * Dio.c
 *
 *  Created on: Nov 30, 2019
 *      Author: AVE-LAP-070
 */

#include "StdTypes.h"
#include "BitMath.h"
#include "Dio_Interface.h"
#include "Port_Private.h"

STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    STD_levelType ret;
    Dio_PortType PortId = (Dio_PortType)(ChannelId / 8);
    Dio_ChannelType ChannelPos = (Dio_ChannelType)(ChannelId % 8);
    switch(PortId)
    {
    case Dio_Port_A:
        ret = (STD_levelType)GET_BIT(PORTA_REG->GPIODATA,ChannelPos);
        break;

    case Dio_Port_B:
        ret = (STD_levelType)GET_BIT(PORTB_REG->GPIODATA,ChannelPos);
        break;

    case Dio_Port_C:
        ret = (STD_levelType)GET_BIT(PORTC_REG->GPIODATA,ChannelPos);
        break;
    case Dio_Port_D:
        ret = (STD_levelType)GET_BIT(PORTD_REG->GPIODATA,ChannelPos);
        break;
    case Dio_Port_E:
        ret = (STD_levelType)GET_BIT(PORTE_REG->GPIODATA,ChannelPos);
        break;
    case Dio_Port_F:
        ret = (STD_levelType)GET_BIT(PORTF_REG->GPIODATA,ChannelPos);
        break;
    default:
        /*error*/
        ret =(STD_levelType) 2;
        break;
    }
    return ret;

}
void Dio_WriteChannel(Dio_ChannelType ChannelId, STD_levelType Level)
{
    Dio_PortType PortId = (Dio_PortType)(ChannelId / 8);
    Dio_ChannelType ChannelPos = (Dio_ChannelType)(ChannelId % 8);
    switch(PortId)
    {
    case Dio_Port_A:
        if(Level == STD_low)
        {
            CLEAR_BIT(PORTA_REG->GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTA_REG->GPIODATA,ChannelPos);
        }
        break;

    case Dio_Port_B:
        if(Level == STD_low)
        {
            CLEAR_BIT(PORTB_REG->GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTB_REG->GPIODATA,ChannelPos);
        }
        break;

    case Dio_Port_C:
        if(Level == STD_low)
        {
            CLEAR_BIT(PORTC_REG->GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTC_REG->GPIODATA,ChannelPos);
        }
        break;
    case Dio_Port_D:
        if(Level == STD_low)
        {
            CLEAR_BIT(PORTD_REG->GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTD_REG->GPIODATA,ChannelPos);
        }
        break;
    case Dio_Port_E:
        if(Level == STD_low)
        {
            CLEAR_BIT(PORTE_REG->GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTE_REG->GPIODATA,ChannelPos);
        }
        break;
    case Dio_Port_F:
        if(Level == STD_low)
        {
            CLEAR_BIT(PORTF_REG->GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTF_REG->GPIODATA,ChannelPos);
        }
        break;
    default:
        /*error*/
        break;
    }
}
uint8 Dio_ReadPort(Dio_PortType PortId )
{
    uint8 ret;
    switch(PortId)
    {
    case Dio_Port_A:
        ret = PORTA_REG->GPIODATA;
        break;

    case Dio_Port_B:
        ret = PORTB_REG->GPIODATA;
        break;

    case Dio_Port_C:
        ret = PORTC_REG->GPIODATA;
        break;
    case Dio_Port_D:
        ret = PORTD_REG->GPIODATA;
        break;
    case Dio_Port_E:
        ret = PORTE_REG->GPIODATA;
        break;
    case Dio_Port_F:
        ret = PORTF_REG->GPIODATA;
        break;
    default:
        /*error*/
        break;
    }

    return ret;
}
void Dio_WritePort( Dio_PortType PortId, uint8 value)
{
    switch(PortId)
    {
    case Dio_Port_A:
        PORTA_REG->GPIODATA = value;
        break;
    case Dio_Port_B:
        PORTB_REG->GPIODATA = value;
        break;

    case Dio_Port_C:
        PORTC_REG->GPIODATA = value;
        break;
    case Dio_Port_D:
        PORTD_REG->GPIODATA = value;
        break;
    case Dio_Port_E:
        PORTE_REG->GPIODATA = value;
        break;
    case Dio_Port_F:
        PORTF_REG->GPIODATA = value;
        break;
    default:
        /*error*/
        break;
    }
}


void Dio_FlipPort(Dio_PortType PortId)
{
    switch(PortId)
    {
    case Dio_Port_A:
        PORTA_REG->GPIODATA = ~ PORTA_REG->GPIODATA;
        break;
    case Dio_Port_B:
        PORTB_REG->GPIODATA = ~PORTB_REG->GPIODATA;
        break;
    case Dio_Port_C:
        PORTC_REG->GPIODATA = ~PORTC_REG->GPIODATA;
        break;
    case Dio_Port_D:
        PORTD_REG->GPIODATA = ~PORTD_REG->GPIODATA;
        break;
    case Dio_Port_E:
        PORTE_REG->GPIODATA = ~PORTE_REG->GPIODATA;
        break;
    case Dio_Port_F:
        PORTF_REG->GPIODATA = ~PORTF_REG->GPIODATA;
        break;
    default:
        /*error*/
        break;
    }
}
