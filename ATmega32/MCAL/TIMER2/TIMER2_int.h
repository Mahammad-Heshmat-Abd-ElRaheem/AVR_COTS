/************************************************/
/* Title       : TIMER2_DRIVER                  */
/* Author      : MAHAMMAD HESHMAT               */
/* Last Update : 20-11-2022                     */
/************************************************/


#ifndef _TIMER2_INT_H
#define _TIMER2_INT_H


void TIMER2_void_Init(void);

void TIMER2_void_SetTimerReg(u8 Copy_u8Val);
void TIMER2_void_SetCompareVal(u8 Copy_u8Val);

void TIMER2_void_EnableOVInt(void);
void TIMER2_void_DisableOVInt(void);

void TIMER2_void_EnableCTCInt(void);
void TIMER2_void_DisableCTCInt(void);




#endif