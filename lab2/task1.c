#include <stdio.h> 
#include <math.h> 
_Bool isInArea(double x, double y)
{
	return (pow(x, 2) - 1 >= -1) && (x >= -1) && (y <= 1) && (x <= 1);
}

