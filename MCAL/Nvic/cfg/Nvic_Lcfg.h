/*
 * Nvic_Lcfg.h
 *
 *  Created on: Nov 22, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_NVIC_CFG_NVIC_LCFG_H_
#define MCAL_NVIC_CFG_NVIC_LCFG_H_



#define           ENABLED_INTERRUPT_NO             5


typedef struct cfgStruct
{
    g_ISRVirIdx_t     interruptNumber;
    interruptState_t  interruptState;
    systemInterrupt_t interruptPriority;
}lcfgStruct_t;

extern lcfgStruct_t intArrCfg[ENABLED_INTERRUPT_NO];



#endif /* MCAL_NVIC_CFG_NVIC_LCFG_H_ */
