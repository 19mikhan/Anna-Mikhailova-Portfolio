/*
* File: positive.c
* -------------
* This program gets a number and checks if it is a
* positive number.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2;
	printf("Enter number ");
	n1 = GetInteger ();
	n2 = -(n1);
	if (n1 > 0)
	{
		printf("The number %d is positive and its absolute value is %d. \n", n1, n1);
	}
	if (n1 < 0)
	{
		printf("The number %d is negative and its absolute value is %d. \n", n1, n2);
	}
	if (n1 == 0)
	{
		printf ("The number 0 is neither negative nor positive and its absolute value is 0. \n");
	}
}
