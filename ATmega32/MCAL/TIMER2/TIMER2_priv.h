/************************************************/
/* Title       : TIMER2_DRIVER                  */
/* Author      : MAHAMMAD HESHMAT               */
/* Last Update : 20-11-2022                     */
/************************************************/



#ifndef _TIMER2_PRIV
#define _TIMER2_PRIV

#define TIMSK (*(volatile u8 * )0x59)  //Timer/Counter Interrupt Mask Register
#define OCR2 (*(volatile u8 * )0x43)
#define TCCR2 (*(volatile u8 * )0x45)
#define TCNT2 (*(volatile u8 * )0x44)
#define TIFR (*(volatile u8 * )0x58)   //Timer/Counter Interrupt Flag Register
#define ASSR (*(volatile u8 * )0x42)  //Asynchronous Status Register
#define SFIOR (*(volatile u8 * )0x50)  //Special Function IO Register


#define TIMER2_NORMAL 		1
#define TIMER2_CTC 			2
#define TIMER2_FAST_PWM 	3
#define TIMER2_PHASE_PWM 	4

#define TIMER2_DIV_BY_1			1
#define TIMER2_DIV_BY_8			5
#define TIMER2_DIV_BY_64		8
#define TIMER2_DIV_BY_256		10
#define TIMER2_DIV_BY_1024		15


#define TIMER2_NO_ACTION	 51
#define TIMER2_TOGGLE		 52
#define TIMER2_SET			 53
#define TIMER2_CLEAR		 54
#define TIMER2_INVERTED		 55
#define TIMER2_NON_INVERTED  56

#endif
