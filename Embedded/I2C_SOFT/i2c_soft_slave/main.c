/* System */
/*-----------------------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "stm32f411xe.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "main.h"

/* Library*/
/*-----------------------------------------------------------------------------------*/
#include "gpio.h"
#include "systick.h"
#include "soft_i2c_slave.h"

/* Declare */
/*-----------------------------------------------------------------------------------*/
uint8_t buffer[8] = {0x80,0x40,0x20,0x10};

/* Funcion */
/*-----------------------------------------------------------------------------------*/

/* Main Program */
/*-----------------------------------------------------------------------------------*/
int main()
{
	SysClock_configure();
	I2C_Slave_Init();
	
	while(1)
	{

	}
}


