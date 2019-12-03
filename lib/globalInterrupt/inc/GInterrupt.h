/*
 * GInterrupt.h
 *
 *  Created on: Nov 22, 2019
 *      Author: AVE-LAP-070
 */

#ifndef LIB_GLOBALINTERRUPT_GINTERRUPT_H_
#define LIB_GLOBALINTERRUPT_GINTERRUPT_H_
#include "InterruptComTypes.h"


typedef enum armMode
{
    SUPERVISED_MODE,
    UNSUPERVISED_MODE
}armMode_t;


#define GI_ENABLE()             __asm("    cpsie   i\n");
#define GI_DISABLE()            __asm("    cpsid   i\n");

//#define SVC_CALL()              __asm("SVC:");

//#define EnablePrivilegedMode() __asm("__svc:")


#define ENTER_SUPERVISED()   setArmMode(SUPERVISED_MODE);\
                             put("one", 1)

#define ENTER_UNSUPERVISED()  setArmMode(UNSUPERVISED_MODE);\
                              put("one", 1)

#pragma SWI_ALIAS(put, 48) /* #pragma SWI_ALIAS(48) for C++ */


int put (char *key, int value);


void swiHandler(void);

void installNIVCISRFunction(g_ISRVirIdx_t idx, void (*isr)(void));


void deInstallNIVCISRFunction(g_ISRVirIdx_t idx, void (*isr)(void));


void IntVirDefaultFun(void);


void PortAISRHandler(void);


void PortBISRHandler(void);


void PortCISRHandler(void);


void PortDISRHandler(void);


void PortEISRHandler(void);


void PortFISRHandler(void);

void setArmMode(armMode_t mode);

#endif /* LIB_GLOBALINTERRUPT_GINTERRUPT_H_ */
