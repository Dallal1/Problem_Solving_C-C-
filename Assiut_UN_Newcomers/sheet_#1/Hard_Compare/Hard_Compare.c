#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, re1, re2;

	scanf ("%lf %lf %lf %lf", &a, &b, &c, &d);
	re1 = b*log(a);
	re2 = d*log(c);

	if (re1 > re2)
		printf ("YES");
	else
		printf ("NO");
	return (0);
}
