#include <stdio.h>

int main()
{
	double R, X;
	
	X = 3.141592653;
	scanf ("%lf", &R);
	printf("R: %.9lf\n", R);
	printf ("%.9lf", (R * 2) * X);
	return (0);
}
