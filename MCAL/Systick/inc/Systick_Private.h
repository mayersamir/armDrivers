/*
 * Systick_Private.h
 *
 *  Created on: Dec 3, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_SYSTICK_INC_SYSTICK_PRIVATE_H_
#define MCAL_SYSTICK_INC_SYSTICK_PRIVATE_H_




#define   SYSTICK_STCTRL  *((volatile uint32*)(0xE000E010))
#define   STCTRL_ENABLE   0
#define   STCTRL_INTEN    1
#define   STCTRL_CLKSRC   2
#define   STCTRL_COUNT    16



#define   SYSTICK_STRELOAD    *((volatile uint32*)(0xE000E014))



#define   SYSTICK_STCURRENT   *((volatile uin32*)(0xE000E018))



#endif /* MCAL_SYSTICK_INC_SYSTICK_PRIVATE_H_ */
