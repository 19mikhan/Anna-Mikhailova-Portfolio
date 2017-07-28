/*
* File: factorial.c
* -------------
* This program computes and displays a table of the
* factorials of the numbers in the range of 1-10.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int factorial, I;
	factorial = 1;
	printf("The factorial of n is n! = 1*2*3*...*(n-1)*n. \n");
	printf("So... \n");
	for(I=1; I<=10; I++)
	{
		factorial = factorial*I;
		printf("%lu! = %lu \n", I, factorial);
	}
}
