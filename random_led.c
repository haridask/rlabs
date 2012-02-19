#include <stdint.h>
#include<msp430.h>
#define LED1 BIT0


void delay()
{
	unsigned int i = 0;
	while(++i < 30000);
}

main()
{P1DIR = 1;
 P1OUT = 0;

uint16_t lfsr = 0xACE1u;
unsigned bit;
unsigned period = 0;
do {
	delay();
	
	
  bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
  lfsr =  (lfsr >> 1) | (bit << 15);

  ++period;
if(bit == 0)
	P1OUT = 0;
else 
	P1OUT = 1;
} while(lfsr != 0xACE1u);
}
