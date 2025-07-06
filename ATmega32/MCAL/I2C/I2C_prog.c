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

void IIC_voidMasterInit(void)
{
	/* set speed to 400K in case node is master */
	TWBR = 12;
	CLEAR_BIT(TWSR , TWPS0);
	CLEAR_BIT(TWSR , TWPS1);
	
	/* enable ack */
	SET_BIT(TWCR , TWEA);
	
	/* enable TWI */
	SET_BIT(TWCR , TWEN);
}

void IIC_voidSlaveInit(void)
{	
	/* enable ack */
	SET_BIT(TWCR , TWEA);
	
	/* enable TWI */
	SET_BIT(TWCR , TWEN);
}

void IIC_voidSetOwnAddress(u8 Copy_u8Address)
{
	TWAR = (Copy_u8Address << 1); 
}

u8 IIC_u8SendStart(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	
	while(GET_BIT(TWCR , TWINT) == 0);
	
	if((TWSR & 0xF8) != START)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}
void IIC_u8SendStop(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTO)|(1<<TWEN);
}

u8 IIC_voidMasterSendByte(u8 Copy_u8Address , u8 Copy_u8Data)
{    
    u8 status = 0;
	status = IIC_u8SendStart();
	if(status == 0)
	{
		// action / LCD
		return;
	}
	
	TWDR = (Copy_u8Address << 1);
	TWCR = (1<<TWINT)|(1<<TWEN);
	
	while(GET_BIT(TWCR , TWINT) == 0);
	
	if((TWSR & 0xF8) != SLA_W_ACK)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
	IIC_u8SendStop();
	
}
u8 IIC_voidMasterRecieveByte(u8 Copy_u8Address , u8* P_u8Data);

u8 IIC_voidSlaveSendByte(u8 Copy_u8Address , u8 Copy_u8Data);
u8 IIC_voidSlaveRecieveByte(u8 Copy_u8Address , u8* P_u8Data);