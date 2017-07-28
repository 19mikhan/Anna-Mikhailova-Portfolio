/*
* File: prime.c
* -------------
* This program displays all the prime numbers between 50 and 100.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int num;
	for(num=50; num<=100; num++)
	{
		if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0 && num%11!=0 && num%13!=0 && num%17!=0 && num%19!=0 && num%23!=0) 
		{
			printf ("%d \n", num);
		}
	}	
}

