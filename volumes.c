/*
* File: volumes.c
* -------------
* This program computes the volume of 
* either a cube, cylinder or a box.
*/

#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"

main()
{
	
	string shape;
	float l, w, s, r, h, volume;  
	printf("This program can calculate the volume of a cube, a cylinder, and a rectangular prism. \n");
	printf("Please enter the shape you wold like to calculate the volume of: ");
	shape = GetLine();
	if (StringEqual(shape, "cube"))
	{
		printf("Enter the side length ");
		s = GetReal();
		volume = s*s*s;
		printf("The volume of a cube with side=%f is: %f. \n", s, volume);
	}
	else if (StringEqual(shape, "cylinder"))
	{
		printf("Enter the radius ");
		r = GetReal();
		printf("Enter the height ");
		h = GetReal();
		volume = 3.14*r*r*h;
		printf("The volume of a cylinder with radius = %f and height = %f is: %f. \n", r, h, volume);
	}
	else if (StringEqual(shape, "rectangular prism"))
	{
		printf("Enter the length ");
		l = GetReal();
		printf("Enter the width ");
		w = GetReal();
		printf("Enter the height ");
		h = GetReal();
		volume = l*w*h;
		printf("The volume of a rectangular prism with length = %f, width = %f, and height = %f is: %f. \n", l, w, h, volume);
	}
	else
	{
		printf("The shape you entered is not a cube, cylinder, or rectangular prism. \n");
	}
}
