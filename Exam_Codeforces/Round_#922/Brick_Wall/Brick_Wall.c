#include <stdio.h>

int main()
{
	long long lin, n, m, re;

	scanf ("%lld", &lin);

	while (lin > 0)
	{
		scanf ("%lld %lld", &n, &m);
		m /= 2;
		re = n * m;
		printf ("%lld\n", re);
		lin--;
	}
	return (0);
}
