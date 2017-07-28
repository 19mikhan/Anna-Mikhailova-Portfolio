/*
* File: addMul.c
* -------------
* This program adds and multiplies two numbers.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2, sum, product;
	
	printf("This program adds and multiplies two numbers.\n");
	printf("Enter first number ");
	n1 = GetInteger ();
	printf("Enter second number ");
	n2 = GetInteger ();
	sum = n1 + n2;
	product = n1 * n2;
	printf("The sum of %d and %d is: %d. \n", n1, n2, sum);
	printf("The product of %d and %d is: %d. \n", n1, n2, product);	
}

