#include <stdio.h>

int main()
{
	float x, p, re;

	scanf ("%f %f", &x, &p);
	re = p / (1 - (x / 100));
	printf ("%.2f", re);

	return (0);

}
