#include "reg52.h"

sbit led = P0^0;

void main()
{
	while(1)
	{
		led = 1;
	}
}