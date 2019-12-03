/*
 * LTYPES.h
 *
 *  Created on: Oct 21, 2019
 *      Author: AVE-LAP-070
 */

#ifndef LTYPES_H_
#define LTYPES_H_



typedef unsigned char uint8;
typedef signed char sint8;
typedef	unsigned short int uint16;
typedef signed short int sint16;
typedef unsigned long int uint32;
typedef signed long int sint32;
typedef float f32;
typedef double f64;
typedef volatile uint8* const reg_type;

//typedef uint8 bool;
//typedef bool STATUS;
//#define E_OK (STATUS) 1
//#define E_NOT_OK (STATUS) 0

#define NULL ((void *)0)


#define ZERO   0
#define ONE    1


typedef enum
{
    STD_low=0,
    STD_high=!STD_low
}STD_levelType;

typedef enum
{
    STD_off=0,
    STD_on=!STD_off
}STD_BoolType;

typedef enum
{
    STD_Suspended=0,
    STD_Active=!STD_Suspended
}STD_StatusType;

typedef enum
{
    false=0,
    true=!false
}boolean;

typedef enum
{
    DISABLE=0,
    ENABLE=1
}STD_EnType;

typedef enum
{
    E_OK,
    E_NOT_OK
}Std_ReturnType;

#endif /* LTYPES_H_ */
