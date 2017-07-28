


#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"

main()
{
	float a, p, funct, x, n;
	
	printf("Enter the value at which you want to calculate the derivative ");
	a = GetReal();
	printf("Enter the power of the function ");
	p = GetReal();
	n == 0;
	
	while(p != 0)
	{
		funct = p*powf(a, p-1);
		n = n + 1;
		p = p - 1;
		printf("The %f derivative of the function at x = %f is %f. \n", n, a, funct);
	}
	
}
