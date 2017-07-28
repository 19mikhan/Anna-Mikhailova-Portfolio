/*
* File: volume.c
* -------------
* This program calculates the volume of a cube 
* after reading the side’s value from the user.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main ()
{
	int n1, volume, sidelength;
	
	printf("Enter side length of cube ");
	n1 = GetInteger ();
	sidelength = n1;
	volume = n1 * n1 * n1;
	printf(" The volume of a cube with side = %d is %d. \n", n1, volume);
}
