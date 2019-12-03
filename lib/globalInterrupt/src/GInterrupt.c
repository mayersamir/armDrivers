/*
 * GInterrupt.c
 *
 *  Created on: Nov 29, 2019
 *      Author: AVE-LAP-070
 */

#include <stdint.h>
#include "StdTypes.h"
#include "BitMath.h"
#include "InterruptComTypes.h"
#include "GInterrupt.h"

typedef void (*svcall_t)(void*);

//void service_call(void (*func)(void*), void* args) __attribute__((optimize("1"));

#pragma SWI_ALIAS( func , swi_number )

static uint8 modeVar = SUPERVISED_MODE;




void (* g_pfnVirualVectors[])(void) =
{
    IntVirDefaultFun,                      // GPIO Port A
    IntVirDefaultFun,                      // GPIO Port B
    IntVirDefaultFun,                      // GPIO Port C
    IntVirDefaultFun,                      // GPIO Port D
    IntVirDefaultFun,                      // GPIO Port E
    IntVirDefaultFun,                      // UART0 Rx and Tx
    IntVirDefaultFun,                      // UART1 Rx and Tx
    IntVirDefaultFun,                      // SSI0 Rx and Tx
    IntVirDefaultFun,                      // I2C0 Master and Slave
    IntVirDefaultFun,                      // PWM Fault
    IntVirDefaultFun,                      // PWM Generator 0
    IntVirDefaultFun,                      // PWM Generator 1
    IntVirDefaultFun,                      // PWM Generator 2
    IntVirDefaultFun,                      // Quadrature Encoder 0
    IntVirDefaultFun,                      // ADC Sequence 0
    IntVirDefaultFun,                      // ADC Sequence 1
    IntVirDefaultFun,                      // ADC Sequence 2
    IntVirDefaultFun,                      // ADC Sequence 3
    IntVirDefaultFun,                      // Watchdog timer
    IntVirDefaultFun,                      // Timer 0 subtimer A
    IntVirDefaultFun,                      // Timer 0 subtimer B
    IntVirDefaultFun,                      // Timer 1 subtimer A
    IntVirDefaultFun,                      // Timer 1 subtimer B
    IntVirDefaultFun,                      // Timer 2 subtimer A
    IntVirDefaultFun,                      // Timer 2 subtimer B
    IntVirDefaultFun,                      // Analog Comparator 0
    IntVirDefaultFun,                      // Analog Comparator 1
    IntVirDefaultFun,                      // Analog Comparator 2
    IntVirDefaultFun,                      // System Control (PLL, OSC, BO)
    IntVirDefaultFun,                      // FLASH Control
    IntVirDefaultFun,                      // GPIO Port F
    IntVirDefaultFun,                      // GPIO Port G
    IntVirDefaultFun,                      // GPIO Port H
    IntVirDefaultFun,                      // UART2 Rx and Tx
    IntVirDefaultFun,                      // SSI1 Rx and Tx
    IntVirDefaultFun,                      // Timer 3 subtimer A
    IntVirDefaultFun,                      // Timer 3 subtimer B
    IntVirDefaultFun,                      // I2C1 Master and Slave
    IntVirDefaultFun,                      // Quadrature Encoder 1
    IntVirDefaultFun,                      // CAN0
    IntVirDefaultFun,                      // CAN1
    IntVirDefaultFun,                      // Hibernate
    IntVirDefaultFun,                      // USB0
    IntVirDefaultFun,                      // PWM Generator 3
    IntVirDefaultFun,                      // uDMA Software Transfer
    IntVirDefaultFun,                      // uDMA Error
    IntVirDefaultFun,                      // ADC1 Sequence 0
    IntVirDefaultFun,                      // ADC1 Sequence 1
    IntVirDefaultFun,                      // ADC1 Sequence 2
    IntVirDefaultFun,                      // ADC1 Sequence 3
    IntVirDefaultFun,                      // GPIO Port J
    IntVirDefaultFun,                      // GPIO Port K
    IntVirDefaultFun,                      // GPIO Port L
    IntVirDefaultFun,                      // SSI2 Rx and Tx
    IntVirDefaultFun,                      // SSI3 Rx and Tx
    IntVirDefaultFun,                      // UART3 Rx and Tx
    IntVirDefaultFun,                      // UART4 Rx and Tx
    IntVirDefaultFun,                      // UART5 Rx and Tx
    IntVirDefaultFun,                      // UART6 Rx and Tx
    IntVirDefaultFun,                      // UART7 Rx and Tx
    IntVirDefaultFun,                      // I2C2 Master and Slave
    IntVirDefaultFun,                      // I2C3 Master and Slave
    IntVirDefaultFun,                      // Timer 4 subtimer A
    IntVirDefaultFun,                      // Timer 4 subtimer B
    IntVirDefaultFun,                      // Timer 5 subtimer A
    IntVirDefaultFun,                      // Timer 5 subtimer B
    IntVirDefaultFun,                      // Wide Timer 0 subtimer A
    IntVirDefaultFun,                      // Wide Timer 0 subtimer B
    IntVirDefaultFun,                      // Wide Timer 1 subtimer A
    IntVirDefaultFun,                      // Wide Timer 1 subtimer B
    IntVirDefaultFun,                      // Wide Timer 2 subtimer A
    IntVirDefaultFun,                      // Wide Timer 2 subtimer B
    IntVirDefaultFun,                      // Wide Timer 3 subtimer A
    IntVirDefaultFun,                      // Wide Timer 3 subtimer B
    IntVirDefaultFun,                      // Wide Timer 4 subtimer A
    IntVirDefaultFun,                      // Wide Timer 4 subtimer B
    IntVirDefaultFun,                      // Wide Timer 5 subtimer A
    IntVirDefaultFun,                      // Wide Timer 5 subtimer B
    IntVirDefaultFun,                      // FPU
    IntVirDefaultFun,                      // I2C4 Master and Slave
    IntVirDefaultFun,                      // I2C5 Master and Slave
    IntVirDefaultFun,                      // GPIO Port M
    IntVirDefaultFun,                      // GPIO Port N
    IntVirDefaultFun,                      // Quadrature Encoder 2
    IntVirDefaultFun,                      // GPIO Port P (Summary or P0)
    IntVirDefaultFun,                      // GPIO Port P1
    IntVirDefaultFun,                      // GPIO Port P2
    IntVirDefaultFun,                      // GPIO Port P3
    IntVirDefaultFun,                      // GPIO Port P4
    IntVirDefaultFun,                      // GPIO Port P5
    IntVirDefaultFun,                      // GPIO Port P6
    IntVirDefaultFun,                      // GPIO Port P7
    IntVirDefaultFun,                      // GPIO Port Q (Summary or Q0)
    IntVirDefaultFun,                      // GPIO Port Q1
    IntVirDefaultFun,                      // GPIO Port Q2
    IntVirDefaultFun,                      // GPIO Port Q3
    IntVirDefaultFun,                      // GPIO Port Q4
    IntVirDefaultFun,                      // GPIO Port Q5
    IntVirDefaultFun,                      // GPIO Port Q6
    IntVirDefaultFun,                      // GPIO Port Q7
    IntVirDefaultFun,                      // GPIO Port R
    IntVirDefaultFun,                      // GPIO Port S
    IntVirDefaultFun,                      // PWM 1 Generator 0
    IntVirDefaultFun,                      // PWM 1 Generator 1
    IntVirDefaultFun,                      // PWM 1 Generator 2
    IntVirDefaultFun,                      // PWM 1 Generator 3
    IntVirDefaultFun                       // PWM 1 Fault
};




void installNIVCISRFunction(g_ISRVirIdx_t idx, void (*isr)(void))
{
    g_pfnVirualVectors[idx] = isr;
}

void deInstallNIVCISRFunction(g_ISRVirIdx_t idx, void (*isr)(void))
{
    g_pfnVirualVectors[idx] = isr;
}


void PortAISRHandler(void)
{
    g_pfnVirualVectors[GPIOA_IRQ]();
}

void PortBISRHandler(void)
{
    g_pfnVirualVectors[GPIOB_IRQ]();
}

void PortCISRHandler(void)
{
    g_pfnVirualVectors[GPIOC_IRQ]();
}

void PortDISRHandler(void)
{
    g_pfnVirualVectors[GPIOD_IRQ]();
}

void PortEISRHandler(void)
{
    g_pfnVirualVectors[GPIOE_IRQ]();
}

void PortFISRHandler(void)
{
   ( g_pfnVirualVectors[GPIOF_IRQ])();
}
//
//void SVC_Handler(void)
//{
//  __asm(
//    ".global SVC_Handler_Main\n"
//    "TST lr, #4\n"
//    "ITE EQ\n"
//    "MRSEQ r0, MSP\n"
//    "MRSNE r0, PSP\n"
//    "B SVC_Handler_Main\n"
//  ) ;
//}
//
//void SVC_Handler_Main( unsigned int *svc_args )
//{
//  unsigned int svc_number;
//
//  /*
//  * Stack contains:
//  * r0, r1, r2, r3, r12, r14, the return address and xPSR
//  * First argument (r0) is svc_args[0]
//  */
//  svc_number = ( ( char * )svc_args[ 6 ] )[ -2 ] ;
//  switch( svc_number )
//  {
//    case 0:  /* EnablePrivilegedMode */
//      __set_CONTROL( __get_CONTROL( ) & ~CONTROL_nPRIV_Msk ) ;
//      break;
//    default:    /* unknown SVC */
//      break;
//  }
//}
//

//


void setArmMode(armMode_t mode)
{

    switch(mode)
    {
    case SUPERVISED_MODE:
        modeVar = SUPERVISED_MODE;
        break;
    case UNSUPERVISED_MODE:
        modeVar = UNSUPERVISED_MODE;
        break;
    }

    return ;
}
void swiHandler(void)
{


    switch(modeVar)
    {
    case SUPERVISED_MODE:
        __asm(" MOV  R3, #1\n");
        break;
    case UNSUPERVISED_MODE:
        __asm(" MOV  R3, #0\n");
        break;

    }


        __asm(" MSR  CONTROL, R3\n");

//    __asm("MRS %[r0], %[cpsr]");
//    __asm("MSR i\n")


        return ;
}




