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


#define SYSTCTRL_RIS    (*((volatile uint32*)(0x400FE050)))
#define RIS_PLLLRIS     6

#define SYSTCTRL_MISC   (*((volatile uint32*)(0x400FE058)))
#define MISC_PLLLMIS    6

#define SYSTCTRL_RCC    (*((volatile uint32*)(0x400FE060)))
#define RCC_MOSCDIS     0
#define RCC_BYPASS      11
#define RCC_PWRDN       13
#define RCC_USEPWMDIV   20
#define RCC_USESYSDIV   22
#define RCC_ACG         23
#define RCC_OCSRC0      4
#define RCC_OCSRC1      5



#define SYSTCTRL_GPIOHBCTL (*((volatile uint32*)(0x400FE06C)))
#define GPIOHBCTL_PORTA    0
#define GPIOHBCTL_PORTB    1
#define GPIOHBCTL_PORTC    2
#define GPIOHBCTL_PORTD    3
#define GPIOHBCTL_PORTE    4
#define GPIOHBCTL_PORTF    5

#define SYSTCTRL_RCC2      (*((volatile uint32*)(0x400FE070)))
#endif /* MCAL_SYSTCTRL_INC_SYSTCTRL_PRIVATE_H_ */
