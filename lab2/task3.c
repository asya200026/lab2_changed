#include <stdio.h>
#include <math.h> 

_Bool isInArea(double x, double y);
double func(double x);

int main(void)
{
	double x, y;
	int n;
	printf("Choose task 1 or 2: \n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("Completing 1 task:\n");
		printf("x = ");
		scanf_s("%lf", &x);
		printf("y = ");
		scanf_s("%lf", &y);
		printf("%d", isInArea(x, y));
		break;
	case 2:
		printf("Completing 2 task:\n");
		printf("x = ");
		scanf_s("%lf", &x);
		printf_s("%.3lf", func(x));
		break;
	default:
		printf("Incorrect input ");
		break;
	}
	return(0);
}
