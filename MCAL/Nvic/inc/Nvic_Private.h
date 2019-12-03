/*
 * Nvic_Private.h
 *
 *  Created on: Nov 22, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_NVIC_INC_NVIC_PRIVATE_H_
#define MCAL_NVIC_INC_NVIC_PRIVATE_H_


typedef union bitManipulation
{
    uint32 B0:1;
    uint32 B1:1;
    uint32 B2:1;
    uint32 B3:1;
    uint32 B4:1;
    uint32 B5:1;
    uint32 B6:1;
    uint32 B7:1;
    uint32 B8:1;
    uint32 B9:1;
    uint32 B10:1;
    uint32 B11:1;
    uint32 B12:1;
    uint32 B13:1;
    uint32 B14:1;
    uint32 B15:1;
    uint32 B16:1;
    uint32 B17:1;
    uint32 B18:1;
    uint32 B19:1;
    uint32 B20:1;
    uint32 B21:1;
    uint32 B22:1;
    uint32 B23:1;
    uint32 B24:1;
    uint32 B25:1;
    uint32 B26:1;
    uint32 B27:1;
    uint32 B28:1;
    uint32 B29:1;
    uint32 B30:1;
    uint32 B31:1;

}bit_field_Type;


typedef union bitManipulation2
{
    uint32 Res1:5;
    uint32 Pri0:3;
    uint32 Res2:5;
    uint32 Pri1:3;
    uint32 Res3:5;
    uint32 Pri2:3;
    uint32 Res4:5;
    uint32 Pri3:1;
}pri_field_Type;

typedef union bitManipulation3
{
    uint32 INTID:8;
    uint32 Res0 :24;
}swtreg_field_Type;


typedef union regAccessType
{
    bit_field_Type regBitsAcess;
    pri_field_Type priFieldAccess;
    swtreg_field_Type StwRegAccess;
    uint32 regAccess;
}uniRegAccessType;

typedef enum intEnableReg
{
    EN0,
    EN1,
    EN2,
    EN3,
    EN4
}enableReg_t;

typedef enum intDisableReg
{
    DIS0,
    DIS1,
    DIS2,
    DIS3,
    DIS4
}disableReg_t;

typedef struct nvic_registers
{
    /*
     * offset 0x100
     */
    uniRegAccessType NVIC_EN0;
    uniRegAccessType NVIC_EN1;
    uniRegAccessType NVIC_EN2;
    uniRegAccessType NVIC_EN3;
    uniRegAccessType NVIC_EN4;
    uint8 reserved1[56];
    uniRegAccessType NVIC_DIS0;
    uniRegAccessType NVIC_DIS1;
    uniRegAccessType NVIC_DIS2;
    uniRegAccessType NVIC_DIS3;
    uniRegAccessType NVIC_DIS4;
    uniRegAccessType NVIC_PEND0;
    uniRegAccessType NVIC_PEND1;
    uniRegAccessType NVIC_PEND2;
    uniRegAccessType NVIC_PEND3;
    uniRegAccessType NVIC_PEND4;
    uniRegAccessType NVIC_UNPEND0;
    uniRegAccessType NVIC_UNPEND1;
    uniRegAccessType NVIC_UNPEND2;
    uniRegAccessType NVIC_UNPEND3;
    uniRegAccessType NVIC_UNPEND4;
    uniRegAccessType NVIC_ACTIVE0;
    uniRegAccessType NVIC_ACTIVE1;
    uniRegAccessType NVIC_ACTIVE2;
    uniRegAccessType NVIC_ACTIVE3;
    uniRegAccessType NVIC_ACTIVE4;
    uniRegAccessType NVIC_PRI0;
    uniRegAccessType NVIC_PRI1;
    uniRegAccessType NVIC_PRI2;
    uniRegAccessType NVIC_PRI3;
    uniRegAccessType NVIC_PRI4;
    uniRegAccessType NVIC_PRI5;
    uniRegAccessType NVIC_PRI6;
    uniRegAccessType NVIC_PRI7;
    uniRegAccessType NVIC_PRI8;
    uniRegAccessType NVIC_PRI9;
    uniRegAccessType NVIC_PRI10;
    uniRegAccessType NVIC_PRI11;
    uniRegAccessType NVIC_PRI12;
    uniRegAccessType NVIC_PRI13;
    uniRegAccessType NVIC_PRI14;
    uniRegAccessType NVIC_PRI15;
    uniRegAccessType NVIC_PRI16;
    uniRegAccessType NVIC_PRI17;
    uniRegAccessType NVIC_PRI18;
    uniRegAccessType NVIC_PRI19;
    uniRegAccessType NVIC_PRI20;
    uniRegAccessType NVIC_PRI21;
    uniRegAccessType NVIC_PRI22;
    uniRegAccessType NVIC_PRI23;
    uniRegAccessType NVIC_PRI24;
    uniRegAccessType NVIC_PRI25;
    uniRegAccessType NVIC_PRI26;
    uniRegAccessType NVIC_PRI27;
    uniRegAccessType NVIC_PRI28;
    uniRegAccessType NVIC_PRI29;
    uniRegAccessType NVIC_PRI30;
    uniRegAccessType NVIC_PRI31;
    uniRegAccessType NVIC_PRI32;
    uniRegAccessType NVIC_PIR33;
    uniRegAccessType NVIC_PIR34;
    uniRegAccessType NVIC_SWTRIG;

}strNvicRegsType;


#define            NVIC_REGS     ((volatile strNvicRegsType*)(0xE000E100))



#endif /* MCAL_NVIC_INC_NVIC_PRIVATE_H_ */
