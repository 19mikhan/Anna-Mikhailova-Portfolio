/*
* File: max.c
* -------------
* This program gets two integers and finds the maximum.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2;
	printf("Enter first number ");
	n1 = GetInteger ();
	printf("Enter second number ");
	n2 = GetInteger ();
	if (n1 > n2)
	{
		printf ("The maximum number between %d and %d is %d \n", n1, n2, n1);
	}
	if (n1 < n2)
	{
		printf ("The maximum number between %d and %d is %d \n", n1, n2, n2);
	}
	if (n1 == n2)
	{
		printf ("The two numbers %d and %d are equal \n", n1, n2);
	}
}

