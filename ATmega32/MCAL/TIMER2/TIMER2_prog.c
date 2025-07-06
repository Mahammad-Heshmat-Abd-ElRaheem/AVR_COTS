/************************************************/
/* Title       : TIMER2_DRIVER                  */
/* Author      : MAHAMMAD HESHMAT               */
/* Last Update : 20-11-2022                     */
/************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "TIMER2_int.h"
#include "TIMER2_priv.h"
#include "TIMER2_config.h"



void TIMER2_void_Init(void)
{
	/*Disable Interrupts*/
	CLEAR_BIT(TIMSK , 6);
	CLEAR_BIT(TIMSK , 7);
	/*to Asynchronous with the external Crystal Oscillator*/
	SET_BIT(ASSR , 3);
	/*Clear register*/
	TCNT2 = 0 ;
	OCR2 = 0 ;
	
	#if(TIMER2_MODE == TIMER2_NORMAL)
		CLEAR_BIT(TCCR2 , 6);
		CLEAR_BIT(TCCR2 , 3);
	
	#elif(TIMER2_MODE == TIMER2_CTC)
		CLEAR_BIT(TCCR2 , 6);
		SET_BIT  (TCCR2 , 3);
		
	#elif(TIMER2_MODE == TIMER2_FAST_PWM )
		SET_BIT  (TCCR2 , 6);
		SET_BIT  (TCCR2 , 3);
		
	#elif(TIMER2_MODE == TIMER2_PHASE_PWM )
		SET_BIT	(TCCR2 , 6);
		CLEAR_BIT(TCCR2 , 3);
		
	#endif
	
	#if(TIMER2_PRESCALER == TIMER2_DIV_BY_1)
		SET_BIT  (TCCR2 , 0);
		CLEAR_BIT(TCCR2 , 1);
		CLEAR_BIT(TCCR2 , 2);
		
	/*to reset prescaler timer2 */
	SET_BIT  (SFIOR , 1);
	
	#elif(TIMER0_PRESCALER == TIMER0_DIV_BY_8)
		CLEAR_BIT(TCCR2 , 0);
		SET_BIT  (TCCR2 , 1);
		CLEAR_BIT(TCCR2 , 2);
	#elif(TIMER0_PRESCALER == TIMER0_DIV_BY_32)
		SET_BIT  (TCCR2 , 0);
		SET_BIT  (TCCR2 , 1);
		CLEAR_BIT(TCCR2 , 2);
	#elif(TIMER0_PRESCALER == TIMER0_DIV_BY_64 )
		CLEAR_BIT  (TCCR2 , 0);
	    CLEAR_BIT  (TCCR2 , 1);
	    SET_BIT    (TCCR2 , 2);
	#elif(TIMER0_PRESCALER == TIMER0_DIV_BY_128)
		SET_BIT    (TCCR2 , 0);
	    CLEAR_BIT  (TCCR2 , 1);
	    SET_BIT    (TCCR2 , 2);
	#elif(TIMER0_PRESCALER == TIMER0_DIV_BY_256 )
		CLEAR_BIT  (TCCR2 , 0);
	    SET_BIT	   (TCCR2 , 1);
	    SET_BIT    (TCCR2 , 2);
	#elif(TIMER0_PRESCALER == TIMER0_DIV_BY_1024 )
		SET_BIT    (TCCR2 , 0);
	    SET_BIT	   (TCCR2 , 1);
	    SET_BIT    (TCCR2 , 2);
	#endif
	
	#if(TIMER2_COM_EVENT == TIMER2_NO_ACTION)
		CLEAR_BIT(TCCR2 , 4);
		CLEAR_BIT(TCCR2 , 5);
	#elif(TIMER2_COM_EVENT == TIMER2_TOGGLE)
		SET_BIT(TCCR2 , 4)
		CLEAR_BIT(TCCR2 , 5);
	#elif(TIMER2_COM_EVENT == TIMER2_CLEAR )
		CLEAR_BIT(TCCR2 , 4);
		SET_BIT(TCCR2 , 5);
	#elif(TIMER2_COM_EVENT == TIMER2_NON_INVERTED )
		CLEAR_BIT(TCCR2 , 4);
		SET_BIT(TCCR2 , 5);
	#elif(TIMER2_COM_EVENT == TIMER2_SET )
		SET_BIT(TCCR2 , 4);
		SET_BIT(TCCR2 , 5);
	#elif(TIMER2_COM_EVENT == TIMER2_INVERTED )
		SET_BIT(TCCR2 , 4);
		SET_BIT(TCCR2 , 5);
		
	#endif
	
	/*  expected operation here (look in data sheet page 128)
	
	Asynchronous Operation of Timer/Counter2 :
	When Timer/Counter2 operates asynchronously, some considerations must be taken.
	• Warning: When switching between asynchronous and synchronous clocking of
	Timer/Counter2, the Timer Registers TCNT2, OCR2, and TCCR2 might be corrupted. A
	safe procedure for switching clock source is:
	1. Disable the Timer/Counter2 interrupts by clearing OCIE2 and TOIE2.
	2. Select clock source by setting AS2 as appropriate.
	3. Write new values to TCNT2, OCR2, and TCCR2.
	4. To switch to asynchronous operation: Wait for TCN2UB, OCR2UB, and TCR2UB. <- expected that operation
	5. Clear the Timer/Counter2 Interrupt Flags.
	6. Enable interrupts, if needed.	
	*/
	
	/*CLEAR FLAGS*/
	SET_BIT(TIFR , 6);	
	SET_BIT(TIFR , 7);
	
	
}

void TIMER2_void_SetTimerReg(u8 Copy_u8Val)
{
	TCNT2 = Copy_u8Val ;
}

void TIMER2_void_SetCompareVal(u8 Copy_u8Val)
{
	OCR2 = Copy_u8Val ;
}

void TIMER2_void_EnableOVInt(void)
{
	SET_BIT(TIMSK , 6);
}

void TIMER2_void_DisableOVInt(void)
{
	CLEAR_BIT(TIMSK , 6);
}

void TIMER2_void_EnableCTCInt(void)
{
	SET_BIT(TIMSK , 7);
}

void TIMER2_void_DisableCTCInt(void)
{
	CLEAR_BIT(TIMSK , 7);
}


