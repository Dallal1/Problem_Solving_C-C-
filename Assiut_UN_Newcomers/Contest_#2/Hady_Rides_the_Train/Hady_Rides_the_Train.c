#include <stdio.h>

int main ()
{
	long long n, lin, platz, i, re;

	scanf ("%lld", &n);
	i = 0;
	lin = n / 4;
	if (lin % 2 == 0)
	{
		re = n % 4;
	}
	else
	{
		re = 3 - (n % 4);
	}
	printf ("%lld %lld", lin, re);
	return (0);
}
