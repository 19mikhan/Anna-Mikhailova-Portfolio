/*
* File: minMax.c
* -------------
* This program  gets a list of integers 
* from the user and computes the minimal 
* and maximal number appearing in the list.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int num, min, max;
	printf ("Please enter your list of numbers. Signal 0 to end list. \n");
	printf ("? ");
	scanf("%d", &num);
	min = 0;
	max = 0;
	while (num != 0)
	{
		printf("? ");
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		scanf("%d", &num);
	}
	printf ("The minimum number in the list is %d. \n", min);
	printf ("The maximum number in the list is %d. \n", max);
}  
   
	
