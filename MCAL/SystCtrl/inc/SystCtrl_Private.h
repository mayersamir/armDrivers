/*
 * SystCtrl_Private.h
 *
 *  Created on: Dec 1, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_SYSTCTRL_INC_SYSTCTRL_PRIVATE_H_
#define MCAL_SYSTCTRL_INC_SYSTCTRL_PRIVATE_H_



typedef struct
{
    uint32 R0:1;
    uint32 R1:1;
    uint32 R2:1;
    uint32 R3:1;
    uint32 R4:1;
    uint32 R5:1;
    uint32 R6:1;
    uint32 R7:1;
}RCGC_TagType;

#define RCGCGPIO_REG    (*((volatile RCGC_TagType*)0x400FE608))
#define RCGCUART_REG    (*((volatile RCGC_TagType*)0x400FE618))
#define RCGCSSI_REG     (*((volatile RCGC_TagType*)0x400FE61C))
#define RCGCI2C_REG     (*((volatile RCGC_TagType*)0x400FE620))

#endif /* MCAL_SYSTCTRL_INC_SYSTCTRL_PRIVATE_H_ */
