/*
 * Systick_Private.h
 *
 *  Created on: Dec 3, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_SYSTICK_INC_SYSTICK_PRIVATE_H_
#define MCAL_SYSTICK_INC_SYSTICK_PRIVATE_H_




#define   SYSTICK_STCTRL  *((volatile uint32*const)(0xE000E010))

#define   SYSTICK_STRELOAD    *((volatile uint32*const)(0xE000E014))

#define   SYSTICK_STCURRENT   *((volatile uin32*const)(0xE000E018))



#endif /* MCAL_SYSTICK_INC_SYSTICK_PRIVATE_H_ */
