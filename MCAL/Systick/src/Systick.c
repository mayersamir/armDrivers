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


static volatile uint32 systickOverFlows;

static volatile uint32 systickPreLoad;

static volatile uint32 systickOverFlowsNeeded;





