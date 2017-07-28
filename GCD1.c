/*
* File: GCD1.c
* -------------
* This program find the greatest 
* common divisor of two numbers.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2, x, rem1, rem2, gcd;
	printf("Enter first integer ");
	n1 = GetInteger();
	printf("Enter second integer ");
	n2 = GetInteger();
	rem1 = n2%n1;
	rem2 = n1%n2;
	
	if (n1 < n2)
	{
		for(x=n1; x>=1; x--)
		{
			if(n2%x==0 && n1%x==0)
			{
				gcd = x; break;
			}
		}
		printf("The GCD of %d and %d is %d. \n", n1, n2, x);
	}
	if (n1>n2)
	{
		for(x=n2; x>=1; x--)
		{
			if(n2%x==0 && n1%x==0)
			{
				gcd = x; break;
			}
		}
		printf("The GCD of %d and %d is %d. \n", n1, n2, x);
	}
	if (n1==n2)
	{
		printf("The GCD of %d and %d is %d. \n", n1, n2, n2);
	}
}
	
