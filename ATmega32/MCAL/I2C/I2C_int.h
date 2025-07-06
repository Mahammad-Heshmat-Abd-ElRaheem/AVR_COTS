/*****************************************/
/*	Author : Khaled Mohsen				 */
/*	Date   : 24-9-2022   		   		 */
/*	Version: 0.1				         */
/*	Driver : IIC		                 */
/*****************************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "IIC_config.h"
#include "IIC_private.h"
#include "IIC_int.h"

#ifndef _IIC_INT_H_
#define _IIC_INT_H_

void IIC_voidMasterInit(void);
void IIC_voidSlaveInit(void);
void IIC_voidSetOwnAddress(u8 Copy_u8Address);
u8 IIC_u8SendStart(void);
void IIC_u8SendStop(void);
u8 IIC_voidMasterSendByte(u8 Copy_u8Address , u8 Copy_u8Data);
u8 IIC_voidMasterRecieveByte(u8 Copy_u8Address , u8* P_u8Data);
u8 IIC_voidSlaveSendByte(u8 Copy_u8Address , u8 Copy_u8Data);
u8 IIC_voidSlaveRecieveByte(u8 Copy_u8Address , u8* P_u8Data);


/*
void IIC_voidInit(void);
void IIC_voidSetOwnAddress(u8 Copy_u8Address);

u8 IIC_u8SendStart(void);
void IIC_u8SendStop(void);

u8 IIC_voidMasterSendByte(u8 Copy_u8Address , u8 Copy_u8Data);
u8 IIC_voidMasterRecieveByte(u8 Copy_u8Address , u8* P_u8Data);

u8 IIC_voidSlaveSendByte(u8 Copy_u8Address , u8 Copy_u8Data);
u8 IIC_voidSlaveRecieveByte(u8 Copy_u8Address , u8* P_u8Data);
*/

#endif