/*
* File: min3.c
* -------------
* This program finds the minimum number among 3 integers.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int n1, n2, n3;
	printf("Enter first number ");
	n1 = GetInteger ();
	printf("Enter second number ");
	n2 = GetInteger ();
	printf("Enter third number ");
	n3 = GetInteger ();
	
	
	if ((n1 <= n2) && (n1 <= n3))
	{
		printf("The minimum number between %d, %d and %d is %d \n",n1, n2, n3, n1);
	}
	else if ((n2 <= n1) && (n2 <= n3))
		{
			printf("The minimum number between %d, %d and %d is %d \n",n1, n2, n3, n2);
		}
	else if ((n3 <= n1) && (n3 <= n2))
		{
			printf("The minimum number between %d, %d and %d is %d \n",n1, n2, n3, n3);
		}
}


/*
	if ((n1 >= n2 > n3) || (n2 >= n1 > n3))
	{
		printf("The minimum number between %d, %d and %d is %d \n",n1, n2, n3, n3);
	}	
	else if ((n1 >= n3 > n2) || (n3 >= n1 > n2))
		{
			printf("The minimum number between %d, %d and %d is %d \n",n1, n2, n3, n2);	
		}		
	else if ((n2 >= n3 > n1) || (n3 >= n2 > n1))
		
			printf("The minimum number between %d, %d and %d is %d \n",n1, n2, n3, n1);	
		}
			printf("The minimum number between %d, %d and %d is %d \n",n1 n2, n3, n1);
		}
	else //if (n1 == n2 == n3)
		{
			printf("The minimum between %d, %d, and %d is %d \n", n1, n2, n3, n1);
		}
		*/
