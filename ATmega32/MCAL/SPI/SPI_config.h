/*****************************************/
/*	Author : MAHAMMAD HESHMAT   		 */
/*	Date   : 6-11-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : SPI_configration      		 */
/*****************************************/

/*
SPI_u8MSB
SPI_u8LSB
*/
#define SPI_u8DATA_ORDER SPI_u8LSB

/*
SPI_u8FOSC_2
SPI_u8FOSC_4
SPI_u8FOSC_8
SPI_u8FOSC_16
SPI_u8FOSC_32
SPI_u8FOSC_64
SPI_u8FOSC_128
*/

#define SPI_u8SPEED SPI_u8FOSC_16

/*
SPI_u8MASTER
SPI_u8SLAVE
*/

#define SPI_u8MASTER_SLAVE SPI_u8MASTER

/*
SPI_u8IDLE_LOW
SPI_u8IDLE_HIGH
*/
#define SPI_u8CLKPOL SPI_u8IDLE_LOW

/*
SPI_u8LEADING
SPI_u8TAILLING
*/
#define SPI_u8CLKPHA SPI_u8LEADING

/*
SPI_u8ENABLE
SPI_u8DISABLE
*/
#define SPI_u8INTERRUPT SPI_u8DISABLE
