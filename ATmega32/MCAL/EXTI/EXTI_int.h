/***************************************/
/*         Auother: Mahammad Heshmat   */
/*         Data   : 26-8-2022          */
/*         Version: 1.0                */
/*         Driver : EXTI               */
/***************************************/

#ifndef EXTI_INT_H_
#define EXTI_INT_H_

void EXTI_voidInitINT0(void);
void EXTI_voidInitINT1(void);
void EXTI_voidInitINT2(void);

void EXTI_voidEnableINT0 (void);
void EXTI_voidEnableINT1 (void);
void EXTI_voidEnableINT2 (void);

void EXTI_voidDisableINT0 (void);
void EXTI_voidDisableINT1 (void);
void EXTI_voidDisableINT2 (void);

void EXTI_voidClearFlagINT0 (void);
void EXTI_voidClearFlagINT1 (void);
void EXTI_voidClearFlagINT2 (void);

#endif