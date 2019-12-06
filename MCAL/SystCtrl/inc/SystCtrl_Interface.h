/*
 * SystCtrl_Interface.h
 *
 *  Created on: Dec 1, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_SYSTCTRL_INC_SYSTCTRL_INTERFACE_H_
#define MCAL_SYSTCTRL_INC_SYSTCTRL_INTERFACE_H_


typedef enum systemClkSrc
{
    MAIN_OSC,
    PRECISION_INTERNAL_OSC,
    PRECISION_INTERNAL_OSC_BY_4,
    LOW_FREQ_INTERNAL_OSC

}sysClkSrc_t;


typedef enum systemFreq
{
    SYSCTL_SYSDIV_3=2,
    SYSCTL_SYSDIV_4,
    SYSCTL_SYSDIV_5,
    SYSCTL_SYSDIV_6,
    SYSCTL_SYSDIV_7,
    SYSCTL_SYSDIV_8,
    SYSCTL_SYSDIV_9,
    SYSCTL_SYSDIV_10,
    SYSCTL_SYSDIV_11,
    SYSCTL_SYSDIV_12,
    SYSCTL_SYSDIV_13,
    SYSCTL_SYSDIV_14,
    SYSCTL_SYSDIV_15,
    SYSCTL_SYSDIV_16

}sysFreqVal_t;

typedef enum xtalFreq
{
    XTAL_4 = 0x06,
    XTAL_4_096,
    XTAL_4_96,
    XTAL_5,
    XTAL_5_12,
    XTAL_6_144,
    XTAL_7_23,
    XTAL_8,
    XTAL_8_192,
    XTAL_10,
    XTAL_12,
    XTAL_12_288,
    XTAL_13_56,
    XTAL_14_31,
    XTAL_16,
    XTAL_16_384,
    XTAL_18,
    XTAL_20,
    XTAL_24,
    XTAL_25

}xtalFreq_t;


void SysCtr_init(void);


#endif /* MCAL_SYSTCTRL_INC_SYSTCTRL_INTERFACE_H_ */
