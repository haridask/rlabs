#include<msp430.h>
void delay()
{	int i=32000;
	while(i--);
}
main()
{
	P1DIR = 0x7f;
	while(1)
	{
		P1OUT = 0x6;
		delay();
		P1OUT = 0x5b;
		delay();
		P1OUT = 0x4f;
		delay();
		P1OUT = 0x66;
		delay();
		P1OUT = 0x6d;
		delay();
		P1OUT = 0x7d;
		delay();
		P1OUT = 0x7;
		delay();
	P1OUT = 0x7f;
		delay();
	}
}
