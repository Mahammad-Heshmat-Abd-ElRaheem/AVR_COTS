#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "SEVEN_SEG_int.h"
#include "DIO_int.h"
#include "SEVEN_SEG_private.h"
#include "SEVEN_SEG_config.h"


void SEVEN_SEG_VoidInit(void)
{
	DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
	DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
	DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
	DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
	DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
	DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW ); 
}

void SEVEN_SEG_INCREASE(void)
{
	if ( COUNTER == 9)
	{  COUNTER = 0 ; }
	COUNTER ++  ;
	switch ( COUNTER )
	case ZERO : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}
	case ONE : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}
	case TWO : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}	
	case THREE :
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}	
	case FOUR :
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}	
	case FIVE : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;			
			}	
	case SIX : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}
	case SEVEN : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}
	case EIGHT : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}
	case NINE : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}	
}
void SEVEN_SEG_DECREASE(void)
{
if ( COUNTER == 0)
	{  COUNTER = 10 ; }
	COUNTER --  ;
	switch ( COUNTER )
	case ZERO : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}
	case ONE : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}
	case TWO : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}	
	case THREE :
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}	
	case FOUR :
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}	
	case FIVE : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;			
			}	
	case SIX : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}
	case SEVEN : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );	
			break ;
			}
	case EIGHT : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}
	case NINE : 
			{
			DIO_voidSetPinValue( KEYPAD_U8_A   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_B   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_C   , LOW ); 
			DIO_voidSetPinValue( KEYPAD_U8_D   , HIGH ); 
			DIO_voidSetPinValue( KEYPAD_U8_EN1 , HIGH); 
			DIO_voidSetPinValue( KEYPAD_U8_EN2 , LOW );
			break ;
			}	
	
}
	