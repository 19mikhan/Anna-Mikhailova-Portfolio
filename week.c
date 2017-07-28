/*
* File: week.c
* -------------
* This program gets a number between 1-7 and 
* prints the corresponding day of the week.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int day;
	printf("Enter the number of a day of the week ");
	day = GetInteger();
	switch(day)
	{
		case 1 : printf("The day is Monday\n"); break;
		case 2 : printf("The day is Tuesday\n"); break;
		case 3 : printf("The day is Wednesday\n"); break;
		case 4 : printf("The day is Thursday\n"); break;
		case 5 : printf("The day is Friday\n"); break;
		case 6 : printf("The day is Saturday\n"); break;
		case 7 : printf("The day is Sunday\n"); break;
		default : printf("The number you entered, %d, is out of range \n", day); break;
	}	
}


/*
{
	int num, day;
	printf("Enter the number of a day of the week ");
	num = GetInteger();
	{
	day = (num == 1)? printf("The day is Monday\n"):
			((num == 2)? printf("The day is Tuesday\n"):
				((num == 3)? printf("The day is Wednesday\n"):
					((num == 4)? printf("The day is Thursday\n"):
						((num == 5)? printf("The day is Friday\n"):
							((num == 6)? printf("The day is Saturday"):
								((num == 7)? printf("The day is Sunday"):printf("The number you entered, %d, is out of range \n", num)
			))))));
	}
}
*/

