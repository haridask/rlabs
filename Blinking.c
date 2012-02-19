#include<msp430.h>
#include<stdio.h>
main()
{		int i=0;
	P1DIR = 1;
	while(1)
{	P1OUT = 1;
	while(i<10000)
	{i++;}
	P1OUT = 0;i=0;
	while(i<10000)
	{i++;}
	i=0;	
}
}
