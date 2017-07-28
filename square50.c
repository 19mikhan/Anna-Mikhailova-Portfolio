/*
* File: square50.c
* -------------
* This program computes and displays all 
* the squares of the numbers from 1 to 50.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int num;
	for(num = 1; num <= 50; num ++)
	{
		printf("%d				%d\n", num, num*num);
	}
	/*for(sqr = 1; sqr <= 2500; sqr = num*num)
	{
		printf("					%d\n", sqr);
	}
	*/

}
