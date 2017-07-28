/*
* File: euclid.c
* -------------
* This program find the greatest 
* common divisor of two numbers 
* by using the Euclid algorithm.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2, x1, x2, rem;
	printf("Enter first integer ");
	n1 = GetInteger();
	printf("Enter second integer ");
	n2 = GetInteger();
	x1 = n1;
	x2 = n2;
	
	while(n2>=1)
	{
		rem = n1%n2;
		if(rem==0)
		{
			printf("The GCD of %d and %d is %d. \n", x1, x2, n2); break; 
		}
		else if(rem!=0)
		{
			n1 = n2;
			n2 = rem;
		}
	}
}
