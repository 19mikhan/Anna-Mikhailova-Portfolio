/*
* File: quad.c
* -------------
* This program solves a quadratic equation.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	float a, b, c, x;
	float det, rt1, rt2;
	printf("Please enter the values of your coefficients: \n");
	printf("a: ");
	a = GetInteger();
	printf("b: ");
	b = GetInteger();
	printf("c: ");
	c = GetInteger();
	det = (b*b)-(4*a*c);
	
	if(a!=0 && b!=0)
	{
		if(det==0)
		{
				rt1 = (-b)/(2*a);
				printf("There is one solution: %.4f \n", rt1 );
		}
		else if(det > 0)
		{
			rt1 = (-b+sqrt(det))/(2*a);
            rt2 = (-b-sqrt(det))/(2*a);
			printf("The are two solutions: %.4f and %.4f \n", rt1, rt2);
		}
		else 
		{
			 printf("There is no real solution ");
		}		
	}	
	else if(b == 0) 
	{
		printf("no solution \n");
	}
	else if(a==0 && b!=0)
	{
		x = (-c)/b;
		printf("The equation is not quadratic and the solution is %f. \n", x); 
	}
}


