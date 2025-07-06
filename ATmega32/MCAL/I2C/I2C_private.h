/*****************************************/
/*	Author : Khaled Mohsen				 */
/*	Date   : 24-9-2022   		   		 */
/*	Version: 0.1				         */
/*	Driver : IIC		                 */
/*****************************************/
#ifndef _IIC_PRIVATE_H_
#define _IIC_PRIVATE_H_

#define START 0x08
#define SLA_W_ACK 0x18 

#define TWAR (*((volatile u8*)0x22))
#define TWBR (*((volatile u8*)0x20))
#define TWCR (*((volatile u8*)0x56))
#define TWDR (*((volatile u8*)0x23))
#define TWSR (*((volatile u8*)0x21))


#define TWPS0  0
#define TWPS1  1
#define TWEA   6
#define TWEN   2
#define TWINT  7 
#define TWSTA  5 

#endif