/*
* File: Calc.c
* -------------
* Computes the square root
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"

main()
{
	float a, b, c, funct;
	
	printf("Enter the bound a ");
	a=GetReal();
	printf("Enter the bound b ");
	b=GetReal();
	c = (a+b)/2;
	
	funct = c*c*c*c*c - 4;
	
	while(funct != 0)
	{
		c = (a+b)/2;
		
		funct = c*c*c*c*c - 4;
		if(funct > 0)
		{
			b = c;	
		}
		else if(funct < 0)
		{
			a = c;
		}
		printf("c = %f \n", c); break;
		
	}	
}





