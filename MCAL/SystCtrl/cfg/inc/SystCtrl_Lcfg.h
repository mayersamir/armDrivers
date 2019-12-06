/*
 * SystCtrl_Lcfg.h
 *
 *  Created on: Dec 6, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_SYSTCTRL_CFG_INC_SYSTCTRL_LCFG_H_
#define MCAL_SYSTCTRL_CFG_INC_SYSTCTRL_LCFG_H_



typedef struct sysCtrlcfg
{
    sysClkSrc_t  clkSrc;
    sysFreqVal_t clkFreq;
    xtalFreq_t   mainOsciFreq;
}sysCtrLcfg_t;

extern sysCtrLcfg_t sysCtrlCfg;


#endif /* MCAL_SYSTCTRL_CFG_INC_SYSTCTRL_LCFG_H_ */
