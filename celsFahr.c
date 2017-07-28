/*
* File: celsFahr.c
* -------------
* This program displays the table of 
* Fahrenheit - Celsius temperatures.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	float c, diff;
	int f;
	c==0;
	printf("Fahrenheit					Celsius \n");
	for(f=0; f<=200; f=f+20)
	{
		c=((float)f-32)*(5.0/9.0);
		printf("%d						%f \n", f, c);
	}
}
