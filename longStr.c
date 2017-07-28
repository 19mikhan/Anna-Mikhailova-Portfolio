/*
* File: longStr.c
* -------------
* This program reads a list of strings 
* until the word “END” appears, and 
* returns the longest string that was 
* included in the input list.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"

main()
{
	string input, x, longest;
	int max;
	printf("Please enter your list of words. Signal the end of your list with the word END. \n");
	input = GetLine();
	max = 0;
	while(!(StringEqual(input, "END")))
	{
		if(StringEqual(input, "END")) break;
		if(StringLength(input) > max)
		{
			max = StringLength(input);
			longest = input;
		}
		x = longest;
		input = GetLine();
	}
	printf("The longest word on your list is: %s. \n", x);
}
