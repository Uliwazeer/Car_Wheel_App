
/*********************** Macros *************************************/
#define F_CPU		8000000UL

/************************** Includes *********************************/

#include <util/delay.h>
#include "StdTypes.h"
#include "LED_Int.h"
#include "BUTTON_Int.h"
#include "SEVEN_SEG_Int.h"
#include "STOP_WATCH_Init.h"
#include "MOTOR_Int.h"
#include "CAR_MOVE_Int.h"

int main(void)
{
	DIO_Init();
	LED_Init();
	BUTTON_Init();
	while (1)
	{
		CAR_MOVE_RUNNABLE();
		
	}



}
