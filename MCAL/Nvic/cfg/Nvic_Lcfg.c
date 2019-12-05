/*
 * Nvic_Lcfg.c
 *
 *  Created on: Nov 22, 2019
 *      Author: AVE-LAP-070
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "InterruptComTypes.h"
#include "Nvic_Interface.h"
#include "Nvic_Lcfg.h"




lcfgStruct_t intArrCfg[ENABLED_INTERRUPT_NO] =
{
 {           GPIOA_IRQ       ,        INTERRUPT_DISABLE        ,      INTERRUPT_NO_PRIORITY         },
 {           GPIOB_IRQ       ,        INTERRUPT_DISABLE        ,      INTERRUPT_NO_PRIORITY         },
 {           GPIOC_IRQ       ,        INTERRUPT_DISABLE        ,      INTERRUPT_NO_PRIORITY         },
 {           UART1           ,        INTERRUPT_DISABLE        ,      INTERRUPT_PRIORITY_1         },
 {           GPIOA_IRQ       ,        INTERRUPT_DISABLE        ,      INTERRUPT_NO_PRIORITY         }
};
