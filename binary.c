/*
* File: binary.c
* -------------
* This program gets a number from 0 to 3 
* and translates it to its binary code .
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int num;
	printf("Enter an integer from 0 to 3 ");
	num = GetInteger();
	switch(num)
	{
		case 0 : printf("0 in binary is 00\n"); break;
		case 1 : printf("1 in binary is 01\n"); break;
		case 2 : printf("2 in binary is 10\n"); break;
		case 3 : printf("3 in binary is 11\n"); break;
		default: printf("The number you entered, %d, is out of range \n", num); break;
	}
}




/*
{
	int num, bin;
	printf("Enter an integer from 0 to 3 ");
	num = GetInteger();
	{
	bin = (num == 0)? printf("0 in binary is 00\n"):
			((num == 1)? printf("1 in binary is 01\n"):
				((num == 2)? printf ("2 in binary is 10"):
					((num == 3)? printf("3 in binary is 11\n"):printf("The number you entered, %d, is out of range \n", num)
		   )));
	*/

