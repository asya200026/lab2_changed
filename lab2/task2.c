
#include <stdio.h> 
#include <math.h> 

double func(double x)
{
		return x <= 3 ? (pow(x, 2) - 3 * x + 9 ):(1/(pow(x, 3) + 6));
}

