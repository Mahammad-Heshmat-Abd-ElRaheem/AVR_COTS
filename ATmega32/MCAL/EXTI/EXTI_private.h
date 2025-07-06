/***************************************/
/*         Auother: Mahammad Heshmat   */
/*         Data   : 26-8-2022          */
/*         Version: 1.0                */
/*         Driver : EXTI               */
/***************************************/
#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

#define MCUCR (*((volatile u8*)0x55))
#define MCUCSR (*((volatile u8*)0x54))
#define GICR (*((volatile u8*)0x5B))
#define GIFR (*((volatile u8*)0x5A))


#define EXTI_U8_LOW_LEVEL	0
#define EXTI_U8_RISING		1
#define EXTI_U8_FALLING		2
#define EXTI_U8_ANY_CHANGE	3

#endif