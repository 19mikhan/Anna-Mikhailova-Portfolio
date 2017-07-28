/*
* File: stars8.c
* -------------
* This program displays a rectange of stars.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2;
	for(n1=1; n1<=8; n1++)
	{
		for(n2=1; n2<9; n2++)
		{
			printf("*");
		}
		printf("\n");
	}
}
