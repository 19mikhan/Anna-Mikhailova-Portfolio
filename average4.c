/*
* File: average4.c
* -------------
* This program reads 4 grades (integers) from the user, 
* computes their average, and then displays on the output 
* screen, the 4 grades as well as the average grade that was
* computed.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2, n3, n4, sum, average;
	
	printf("Enter first number ");
	n1 = GetInteger ();
	printf("Enter second number ");
	n2 = GetInteger ();
	printf("Enter third number ");
	n3 = GetInteger ();
	printf("Enter fourth number ");
	n4 = GetInteger ();
	sum = n1 + n2 + n3 + n4;
	average = sum / 4;
	printf("Your grades were: %d %d %d %d. \n", n1, n2, n3, n4);
	printf("Your average grade is %d. \n", average);	
}
