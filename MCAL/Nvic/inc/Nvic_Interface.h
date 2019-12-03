/*
 * Nvic.h
 *
 *  Created on: Nov 22, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_NVIC_INC_NVIC_INTERFACE_H_
#define MCAL_NVIC_INC_NVIC_INTERFACE_H_


typedef enum interruptType
{
    INTERRUPT_PRIORITY_0,
    INTERRUPT_PRIORITY_1,
    INTERRUPT_PRIORITY_2,
    INTERRUPT_PRIORITY_3,
    INTERRUPT_PRIORITY_4,
    INTERRUPT_PRIORITY_5,
    INTERRUPT_PRIORITY_6,
    INTERRUPT_PRIORITY_7,
    INTERRUPT_NO_PRIORITY
}systemInterrupt_t;


typedef enum interruptState
{
    INTERRUPT_DISABLE,
    INTERRUPT_ENABLE
}interruptState_t;



void nvicInit( void );



#endif /* MCAL_NVIC_INC_NVIC_INTERFACE_H_ */
