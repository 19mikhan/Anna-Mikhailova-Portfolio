/*
* File: power.c
* -------------
* This program gets and integer 
* from the user and draws the 
* corresponding number of cicles.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include <graphics.h>

main()
{
	InitGraphics();
	MovePen(2, 1.0);
	DrawArc(1, 0, 360);
}
