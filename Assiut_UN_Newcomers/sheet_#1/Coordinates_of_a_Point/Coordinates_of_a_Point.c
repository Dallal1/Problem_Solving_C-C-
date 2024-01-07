#include <stdio.h>

int main()
{
	float x, y, min, max;
	
	min = -0.1;
	max = 0.1;
	scanf ("%f %f", &x, &y);
	if (x >= max  && y >= max)
		printf ("Q1");
	else if (x <= min && y >= max)
		printf ("Q2");
	else if (x <= min && y <= min)
		printf ("Q3");
	else if (x >= max && y <= min)
		printf ("Q4");
	else if (x == 0 && y == 0)
		printf ("Origem");
	else if (x == 0)
		printf ("Eixo X");
	else if (y == 0)
		printf ("Eixo Y");

	return (0);
}
