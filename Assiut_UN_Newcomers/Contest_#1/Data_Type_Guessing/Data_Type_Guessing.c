#include <stdio.h>

int main()
{
	double n, k, a, rf;
	long long rd;
	int min, max;
	
	max = 2147483647;
	min = -1 * 2147483648;
	scanf ("%lf %lf %lf", &n, &k, &a);
	
	rf = (n * k) / a;
	rd = rf;
	if (rd - rf == 0 && rf <= max && rf >= min)
		printf ("int");
	else if (rd - rf != 0)
		printf ("double");
	else
		printf ("long long");
	return (0);
}
