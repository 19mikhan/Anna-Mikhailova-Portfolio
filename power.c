/*
* File: power.c
* -------------
* This program computes the power of a number
* by using the multiplication operation.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int base, power, pwr, result;
	printf("Enter the base ");
	base = GetInteger ();
	printf("Enter the power ");
	power = GetInteger ();
	pwr = power;
	result = base;
	while (power > 1)
	{
		result = result * base;   
		power = power - 1;	
	}
	printf("The result of %d ^ %d is %d.\n", base, pwr, result);
}
