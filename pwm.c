#include <msp430.h>
#define LED_ON (P1OUT = BIT0)
#define LED_OFF (P1OUT = 0)
#define MAX 1000
int on_time = 0;
void delay(int n)
{
while(n--);
}
void one_cycle()
{
LED_ON;
delay(on_time);
LED_OFF;
delay(MAX-on_time);
}
main()
{

P1DIR = BIT0;
on_time = 0;
while(1) {
while( on_time < MAX )
		{
			one_cycle();
			on_time = on_time + 5 ;
		}
		while( on_time > 0 )
		{
			one_cycle();
			on_time = on_time - 5;
		}
}
}

