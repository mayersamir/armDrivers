/*
 * Port_Types.h
 *
 *  Created on: Nov 30, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_PORT_INC_PORT_PRIVATE_H_
#define MCAL_PORT_INC_PORT_PRIVATE_H_



typedef enum Gpio_Bus
{
    GPIO_AHP_BUS,
    GPIO_APB_BUS
}Gpio_BusType;

#define USED_BUS    GPIO_APB_BUS

typedef struct Port_Reg
{
    uint32 GPIODATA    ;
    uint32 GPIODIR     ;
    uint32 GPIOIS      ;
    uint32 GPIOIBE     ;
    uint32 GPIOIEV     ;
    uint32 GPIOIM      ;
    uint32 GPIORIS     ;
    uint32 GPIOMIS     ;
    uint32 GPIOICR     ;
    uint32 GPIOAFSEL   ; /*offset : 0x420 -> 424 */

    uint8 Reserved_2[0xDC];
    uint32 GPIODR2R    ; /*offset : 0x500 */
    uint32 GPIODR4R    ;
    uint32 GPIODR8R    ;
    uint32 GPIOODR     ;
    uint32 GPIOPUR     ;
    uint32 GPIOPDR     ;
    uint32 GPIOSLR     ;
    uint32 GPIODEN     ;
    uint32 GPIOLOCK    ;
    uint32 GPIOCR      ;
    uint32 GPIOAMSEL   ;
    uint32 GPIOPCTL    ;
    uint32 GPIOADCCTL  ;
    uint32 GPIODMACTL  ;
}PORT_RegType;



//#if USED_BUS == GPIO_AHP_BUS
//
//#define PORTA_REG    ((volatile PORT_RegType*)(0x40058000))
//#define PORTB_REG    ((volatile PORT_RegType*)(0x40059000))
//#define PORTC_REG    ((volatile PORT_RegType*)(0x4005A000))
//#define PORTD_REG    ((volatile PORT_RegType*)(0x4005B000))
//#define PORTE_REG    ((volatile PORT_RegType*)(0x4005C000))
//#define PORTF_REG    ((volatile PORT_RegType*)(0x4005D000))
//#endif

#if USED_BUS == GPIO_APB_BUS
#define PORTA_REG    ((volatile PORT_RegType*)(0x400043FC))
#define PORTB_REG    ((volatile PORT_RegType*)(0x400053FC))
#define PORTC_REG    ((volatile PORT_RegType*)(0x400063FC))
#define PORTD_REG    ((volatile PORT_RegType*)(0x400073FC))
#define PORTE_REG    ((volatile PORT_RegType*)(0x400243FC))
#define PORTF_REG    ((volatile PORT_RegType*)(0x400253FC))
#endif


#endif /* MCAL_PORT_INC_PORT_PRIVATE_H_ */
