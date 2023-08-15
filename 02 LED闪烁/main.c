#include "reg52.h"

// Œª∂®“Â
sbit led = P0^0;
typedef unsigned int uint16;  // 

void delay(uint16 i)
{
	while(i--);
}

void main()
{
	while(1)
	{
		led = 1;
		delay(50000);
		led = 0;
		delay(50000);
	}
}