/*
 * Port_Lcfg.h
 *
 *  Created on: Nov 30, 2019
 *      Author: AVE-LAP-070
 */

#ifndef MCAL_PORT_CFG_PORT_LCFG_H_
#define MCAL_PORT_CFG_PORT_LCFG_H_




#define PORT_NUM_OF_ACTIVATED_CH        43

typedef struct Port_Cfg
{
    Port_ChIdType           Channel;
    Port_DirType            Dir;
    uint8                   Mode;
    Port_IntCtrType         Interrupt;
    Port_InternalAttachType AttachedRes;
    Port_CurrDriveType      CurrentDrive;
    Port_LockStatusType     LockStatus;
}Port_CfgType;



extern Port_CfgType PortCfgArr[PORT_NUM_OF_ACTIVATED_CH];



#endif /* MCAL_PORT_CFG_PORT_LCFG_H_ */
