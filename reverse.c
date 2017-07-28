/*
* File: reverse.c
* -------------
* This program displays a reversed number.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int input, reverse;
	printf("Please enter integer ");
	input = GetInteger();
	reverse = 0;
	if(input == 0)
	{
		printf("The reverse of your input is %d. \n", 0); 
	}
	while(input != 0)
	{
		reverse = reverse*10;
		reverse = reverse + input%10;
		input = input/10;
	}
	printf ("The reverse of your input is %d. \n", reverse);
}
