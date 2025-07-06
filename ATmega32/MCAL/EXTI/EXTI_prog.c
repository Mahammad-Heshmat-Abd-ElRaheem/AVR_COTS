/***************************************/
/*         Auother: Mahammad Heshmat   */
/*         Data   : 26-8-2022          */
/*         Version: 1.0                */
/*         Driver : EXTI               */
/***************************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "EXTI_int.h"
#include "EXTI_private.h"
#include "EXTI_config.h"
#include "GIE_int.h"

//******************************************************************_ETERNAL INTERUPT_0
void EXTI_voidInitINT0(void)                                     //*
{                                                                //*
	#if EXTI_U8_EVENT == EXTI_U8_LOW_LEVEL                       //*
		CLEAR_BIT (MCUCR,0);                                     //*
		CLEAR_BIT (MCUCR,1);                                     //*
	#elif EXTI_U8_EVENT == EXTI_U8_RISING                        //*
		SET_BIT (MCUCR,0);                                       //*
		SET_BIT (MCUCR,1);                                       //*
	#elif EXTI_U8_EVENT == EXTI_U8_FALLING                       //*
		CLEAR_BIT (MCUCR,0);                                     //*
		SET_BIT (MCUCR,1);                                       //*
	#elif EXTI_U8_EVENT == EXTI_U8_ANY_CHANGE                    //*
		SET_BIT (MCUCR,0);                                       //*
		CLEAR_BIT (MCUCR,1);                                     //*
	#endif                                                       //*
	 EXTI_voidDisableINT0 ();                                    //*
	 GIE_voidDisable ();                                         //*
	 EXTI_voidClearFlagINT0 ();                                  //*
}                                                                //*
void EXTI_voidEnableINT0 (void)                                  //*
{                                                                //*
	SET_BIT (GICR , 6);                                          //*
}                                                                //*
void EXTI_voidDisableINT0 (void)                                 //*
{                                                                //*
	CLEAR_BIT (GICR , 6);                                        //*
}                                                                //*
void EXTI_voidClearFlagINT0 (void)                               //*
{                                                                //*
	SET_BIT(GIFR , 6);                                           //*
}                                                                //*
//******************************************************************



//******************************************************************_ETERNAL INTERUPT_1
void EXTI_voidInitINT0(void)                                     //*
{                                                                //*
	#if EXTI_U8_EVENT == EXTI_U8_LOW_LEVEL                       //*
		CLEAR_BIT (MCUCR,2);                                     //*
		CLEAR_BIT (MCUCR,3);                                     //*
	#elif EXTI_U8_EVENT == EXTI_U8_RISING                        //*
		SET_BIT (MCUCR,2);                                       //*
		SET_BIT (MCUCR,3);                                       //*
	#elif EXTI_U8_EVENT == EXTI_U8_FALLING                       //*
		CLEAR_BIT (MCUCR,2);                                     //*
		SET_BIT (MCUCR,3);                                       //*
	#elif EXTI_U8_EVENT == EXTI_U8_ANY_CHANGE                    //*
		SET_BIT (MCUCR,2);                                       //*
		CLEAR_BIT (MCUCR,3);                                     //*
	#endif                                                       //*
	 EXTI_voidDisableINT1 ();                                    //*
	 GIE_voidDisable ();                                         //*
	 EXTI_voidClearFlagINT1 ();                                  //*
}                                                                //*
void EXTI_voidEnableINT1 (void)                                  //*
{                                                                //*
	SET_BIT (GICR , 7);                                          //*
}                                                                //*
void EXTI_voidDisableINT1 (void)                                 //*
{                                                                //*
	CLEAR_BIT (GICR , 7);                                        //*
}                                                                //*
void EXTI_voidClearFlagINT1 (void)                               //*
{                                                                //*
	SET_BIT(GIFR , 7);                                           //*
}                                                                //*
//******************************************************************



//******************************************************************_ETERNAL INTERUPT_2
void EXTI_voidInitINT0(void)                                     //*
{                                                                //*
	#if EXTI_U8_EVENT == EXTI_U8_FALLING                         //*
		CLEAR_BIT (MCUCSR,1);                                     //*
	#elif EXTI_U8_EVENT == EXTI_U8_RISING                        //*
		SET_BIT (MCUCSR,1);                                       //*
	#endif                                                       //*
	 EXTI_voidDisableINT1 ();                                    //*
	 GIE_voidDisable ();                                         //*
	 EXTI_voidClearFlagINT1 ();                                  //*
}                                                                //*
    void EXTI_voidEnableINT2 (void)                              //*
{                                                                //*
	SET_BIT (GICR , 5);                                          //*
}                                                                //*
void EXTI_voidDisableINT2 (void)                                 //*
{                                                                //*
	CLEAR_BIT (GICR , 5);                                        //*
}                                                                //*
void EXTI_voidClearFlagINT2 (void)                               //*
{                                                                //*
	SET_BIT(GIFR , 5);                                           //*
}                                                                //*
//******************************************************************
