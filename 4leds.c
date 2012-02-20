#include<msp430.h>
void delay()
{	int i=32000;
	while(i--);
}
main()
{
	P1DIR = 0xf;
	while(1)
	{
		P1OUT = 1;
		delay();
		P1OUT = 10;
		delay();
		P1OUT = 100;
		delay();
		P1OUT = 1000;
		delay();
	}
}
