/*
* File: summer.c
* -------------
* This program calculates the month 
* based on the number inputed.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int month;
	printf ("Enter the number of a month in the summer ");
	month = GetInteger ();
	switch(month)	
	{
		case 1 : printf("The month is not in the summer\n"); break;
		case 2 : printf("The month is not in the summer\n"); break;
		case 3 : printf("The month is not in the summer\n"); break;
		case 4 : printf("The month is not in the summer\n"); break;
		case 5 : printf("The month is not in the summer\n"); break;
		case 6 : printf("The month is June\n"); break;
		case 7 : printf("The month is July\n"); break;
		case 8 : printf("The month is August\n"); break;
		case 9 : printf("The month is not in the summer\n"); break;
		case 10 : printf("The month is not in the summer\n"); break;
		case 11 : printf("The month is not in the summer\n"); break;
		case 12 : printf("The month is not in the summer\n"); break;
		default : printf("Your input number is out of range\n"); break;	
	}
}




/*
{
	int month, entry;
	printf("Enter the number of a month in the summer ");
	entry = GetInteger();
	{
	month = (entry == 6)? printf("The month is June\n"): 
		((entry == 7)? printf("The Month is July\n"): 
			((entry == 8)? printf ("The month is August\n"):
				(((entry >= 1) && (entry <  6) || ((entry >= 9) && (entry <=12)))? printf("The month is not in the summer\n"):printf("Your input number is out of range\n")
		)));
	}
}
*/

/*
if (month = =6)
 printf (“June\n”);
else if (month = = 7)
 printf (“July\n”);
else if (month = = 8)
 printf (“August\n”);
else if (month >=1) && (month <= 12)
 printf (“The month is not in the summer\n”);
else
 printf (“Your input number is out of range\n”);
}
*/
