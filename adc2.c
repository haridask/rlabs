#include<msp430.h>
void adc_init()
{
	ADC10CTL0 = ADC10ON | ADC10SHT_2 | SREF_0;
	ADC10CTL1 = INCH_4 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 |CONSEQ_0 ; 	
	ADC10AE0 = BIT4;
	ADC10CTL0 |= ENC ;
}

void start_conversion()
{
	ADC10CTL0 |= ADC10SC;
}

unsigned int converting()
{
	return ADC10CTL1 & ADC10BUSY;
}
void loop()
{	
	int i;
	for(i=0;i<1000;i++);
}
main()
{	P1DIR = 0x41;	
	adc_init();
	start_conversion();
	while(1)
	{
		while(converting());
		if(ADC10MEM<420)
			P1OUT = 0x1;
		else if(ADC10MEM<440)
			P1OUT = 0x40;
		else
			P1OUT = 0x41;
		loop();
	}	
} 
	
	
		


