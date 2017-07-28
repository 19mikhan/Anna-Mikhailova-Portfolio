/*
* File: mulByAdd.c
* -------------
* This program executes multiplication 
* of two integers entered by the user.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2, n22, sum;
	printf("Enter first number ");
	n1 = GetInteger ();
	printf("Enter second number ");
	n2 = GetInteger ();
	n22 = n2;
	sum = 0;
	while (n2 > 0)
	{
		sum = sum + n1;   
		n2 = n2 - 1;	
	}
	printf("The result of %d * %d is %d.\n", n1, n22, sum);
}                       
