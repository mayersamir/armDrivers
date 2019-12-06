/*
 * SystCtrl.c
 *
 *  Created on: Dec 1, 2019
 *      Author: AVE-LAP-070
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "SystCtrl_Interface.h"
#include "SystCtrl_Cfg.h"
#include "SystCtrl_Lcfg.h"
#include "SystCtrl_Private.h"




void SysCtr_init(void)
{


    SET_BIT(SYSTCTRL_RCC,RCC_BYPASS);
    CLEAR_BIT(SYSTCTRL_RCC,RCC_USESYSDIV);


    switch(sysCtrlCfg.mainOsciFreq)
    {
    case XTAL_16:
        //SYSTCTRL_RCC |= (XTAL_16<<6);
        break;
    }
    switch(sysCtrlCfg.clkSrc)
    {
    case MAIN_OSC:
        CLEAR_BIT(SYSTCTRL_RCC,RCC_OCSRC0);
        CLEAR_BIT(SYSTCTRL_RCC,RCC_OCSRC1);
        break;
    case PRECISION_INTERNAL_OSC:
        SET_BIT(SYSTCTRL_RCC,RCC_OCSRC0);
        CLEAR_BIT(SYSTCTRL_RCC,RCC_OCSRC1);
        break;

    }
    CLEAR_BIT(SYSTCTRL_RCC,RCC_PWRDN);

    switch(sysCtrlCfg.clkFreq)
    {
    case SYSCTL_SYSDIV_10:
        SYSTCTRL_RCC &= (0xF87FFFFF);
        SYSTCTRL_RCC |= (SYSCTL_SYSDIV_10<<23);
        break;
    }

    SET_BIT(SYSTCTRL_RCC,RCC_USESYSDIV);

    while(!GET_BIT(SYSTCTRL_RIS,RIS_PLLLRIS));

    SET_BIT(SYSTCTRL_MISC,MISC_PLLLMIS);


    CLEAR_BIT(SYSTCTRL_RCC,RCC_BYPASS);


    RCGCGPIO_REG.R0  = SYSCTR_RCC_GPIO_PORTA;
    RCGCGPIO_REG.R1  = SYSCTR_RCC_GPIO_PORTB;
    RCGCGPIO_REG.R2  = SYSCTR_RCC_GPIO_PORTC;
    RCGCGPIO_REG.R3  = SYSCTR_RCC_GPIO_PORTD;
    RCGCGPIO_REG.R4  = SYSCTR_RCC_GPIO_PORTE;
    RCGCGPIO_REG.R5  = SYSCTR_RCC_GPIO_PORTF;




}
