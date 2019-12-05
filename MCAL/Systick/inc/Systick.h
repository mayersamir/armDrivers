/*
 * Systick.h
 *
 *  Created on: Dec 3, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_SYSTICK_INC_SYSTICK_H_
#define MCAL_SYSTICK_INC_SYSTICK_H_


typedef enum systickState
{
    SYSTICK_ENABLE,
    SYSTICK_DISABLE
}systickState_t;

#define SYSTICK_INTERNAL_OSCILLATOR 0
#define SYSTICK_SYSTEM_CLK          1


typedef enum systickClkSrs
{
    INTERNAL_OSCILLATOR = 0,
    SYSTEM_CLK = 1
}systickClkSrs_t;


typedef enum systickTimeType
{
    TICK_MILLI,
    TICK_MICRO,
    TICK_NANO
}systickTimeType_t;


void sysTickInit(void);


void sysTickCalculations(uint32 delayValue);


void setSysTickCallBack(void(*ptr)(void));



#endif /* MCAL_SYSTICK_INC_SYSTICK_H_ */
