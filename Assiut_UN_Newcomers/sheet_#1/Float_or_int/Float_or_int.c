#include <stdio.h>

int main()
{
	float n, re;
	int i;

	scanf ("%f", &n);
	i = n;
	re = n - i;

	if (re != 0)
		printf ("float %d %f", i, re);
	else
		printf ("int %d", i);
	return (0);
}
