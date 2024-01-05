#include <stdio.h>

int main()
{
	int N;
	long long re = 0;

	scanf ("%d", &N);
	re = (long long)N * (N + 1) / 2;
	printf ("%lld", re);
	return (0);
}
