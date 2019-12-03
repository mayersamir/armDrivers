/*
 * Nvic.c
 *
 *  Created on: Nov 22, 2019
 *      Author: AVE-LAP-070
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "InterruptComTypes.h"
#include "Nvic_Private.h"
#include "Nvic_Interface.h"
#include "Nvic_Cfg.h"
#include "Nvic_Lcfg.h"
#include "GInterrupt.h"


void nvicInit( void )
{
    /*
     * this macro expands to make enter the svc call
     * which is by default changes the value of control
     * register
     * that makes me enter the superVised call
     */


    uint8 confArrIndex ;
    uint8 interruptIndex;

    enableReg_t interruptEnableRegNo;
    disableReg_t interruptDisableRegNo;
    for(confArrIndex = 0;confArrIndex<ENABLED_INTERRUPT_NO;confArrIndex++)
    {
       interruptIndex = intArrCfg[confArrIndex].interruptNumber % 32;
       interruptEnableRegNo = (enableReg_t)(intArrCfg[confArrIndex].interruptNumber / 32);
       interruptDisableRegNo = (disableReg_t)(intArrCfg[confArrIndex].interruptNumber / 32);


       switch(intArrCfg[confArrIndex].interruptState)
       {
           case INTERRUPT_ENABLE:
               switch(interruptEnableRegNo)
               {
               case EN0:
                   SET_BIT((NVIC_REGS->NVIC_EN0.regAccess),interruptIndex);
                   break;
               case EN1:
                  // uint32 s =(NVIC_REGS->NVIC_EN1.regAccess);
                   SET_BIT((NVIC_REGS->NVIC_EN1.regAccess),interruptIndex);
                   break;
               case EN2:
                   SET_BIT((NVIC_REGS->NVIC_EN2.regAccess),interruptIndex);
                   break;
               case EN3:
                   SET_BIT((NVIC_REGS->NVIC_EN3.regAccess),interruptIndex);
                   break;
               case EN4:
                   SET_BIT((NVIC_REGS->NVIC_EN4.regAccess),interruptIndex);
                   break;

               }
           break;
           case INTERRUPT_DISABLE:
               switch(interruptDisableRegNo)
               {
               case DIS0:
                   SET_BIT((NVIC_REGS->NVIC_DIS0.regAccess),interruptIndex);
                   break;
               case DIS1:
                   SET_BIT((NVIC_REGS->NVIC_DIS1.regAccess),interruptIndex);
                   break;
               case DIS2:
                   SET_BIT((NVIC_REGS->NVIC_DIS2.regAccess),interruptIndex);
                   break;
               case DIS3:
                   SET_BIT((NVIC_REGS->NVIC_DIS3.regAccess),interruptIndex);
                   break;
               case DIS4:
                   SET_BIT((NVIC_REGS->NVIC_DIS4.regAccess),interruptIndex);
                   break;
               }
               break;
               default:
                   /*
                    * Asserting error for the user
                    */
                   break;



       }





    }







}
