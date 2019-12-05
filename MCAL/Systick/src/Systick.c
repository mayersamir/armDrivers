/*
 * Systick.c
 *
 *  Created on: Dec 3, 2019
 *      Author: AVE-LAP-070
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "Systick.h"
#include "Systick_Private.h"
#include "Systick_Cfg.h"



static volatile uint32 systickOverFlows;

static volatile uint32 systickPreLoad;

static volatile uint32 systickOverFlowsNeeded;

static const uint32 timeOfOvf = 16777217;

static void(*sysTickPtr)(void);


void sysTickInit(void)
{


    #if SYSTICK_CLK_SRC == SYSTICK_INTERNAL_OSCILLATOR
        CLEAR_BIT(SYSTICK_STCTRL,STCTRL_CLKSRC);
    #elif SYSTICK_CLK_SRC == SYSTICK_SYSTEM_CLK
        SET_BIT(SYSTICK_STCTRL,STCTRL_CLKSRC);
    #endif

    #if SYSTICK_STATE == SYSTICK_ENABLE

        SET_BIT(SYSTICK_STCTRL,STCTRL_ENABLE);
        SET_BIT(SYSTICK_STCTRL,STCTRL_INTEN);
        sysTickCalculations(SYSTICK_TICK_TIME);
    #elif

    #endif


    return ;
}

void sysTickCalculations(uint32 delayValue)
{

    f64 tickTime = (1/((f64)(SYSTICK_FREQ/1000000)));

    f64 overFlowTime = (((f64)timeOfOvf)*tickTime);

    f64 requiredDelayValue;

    f64 requiredNumberOfOvfs;

    uint32 preload;

    switch(SYSTICK_TIME_TYPE)
    {

    case TICK_MILLI:
        requiredDelayValue = (((f64)delayValue)*1000);
        break;


    }

    requiredNumberOfOvfs = (requiredDelayValue/((f64)overFlowTime));

    preload = (timeOfOvf - ((uint32)requiredDelayValue%timeOfOvf));



    systickPreLoad = preload;


    if(preload>0)
    {
        SYSTICK_STRELOAD = preload;
        requiredNumberOfOvfs++;

    }
    else
    {

    }
    systickOverFlows = systickOverFlowsNeeded = ((uint32)requiredNumberOfOvfs);

    return ;

}

void setSysTickCallBack(void(*ptr)(void))
{

    sysTickPtr = ptr;
    return ;

}


void systickISR( void )
{


    if((systickOverFlowsNeeded == 0) || ((systickOverFlowsNeeded-1) == 0))
    {
        systickOverFlowsNeeded = systickOverFlows;
        SYSTICK_STRELOAD = systickPreLoad;

        if(sysTickPtr != NULL)
        {
            sysTickPtr();
            ;
        }
        else
        {

        }


    }
    else
    {
        systickOverFlowsNeeded -- ;

        SYSTICK_STRELOAD = (timeOfOvf-2);

    }
}


