#include <stdio.h>

int main()
{
	long long a, b, c;

	scanf ("%lld %lld %lld", &a, &b, &c);
	
	if (a <= b && a <= c)
		printf ("%lld ", a);
	else if (b <= a && b <= c)
		printf ("%lld ", b);
	else if (c <= a && c <= b)
		printf ("%lld ", c);
	if (a >= b && a >= c)
		printf ("%lld", a);
	else if (b >= a && b >= c)
		printf ("%lld", b);
	else if (c >= a && c >= b)
		printf ("%lld", c);

	return (0);
}
