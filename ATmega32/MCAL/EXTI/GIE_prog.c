/***************************************/
/*         Auother: Mahammad Heshmat   */
/*         Data   : 26-8-2022          */
/*         Version: 1.0                */
/*         Driver : GIE               */
/***************************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "EXTI_int.h"
#include "EXTI_private.h"
#include "EXTI_config.h"




void GIE_voidEnable (void)
{
	SET_BIT (SREG , 7);
}

void GIE_voidDisable (void)
{
	CLEAR_BIT (SREG , 7);
}

