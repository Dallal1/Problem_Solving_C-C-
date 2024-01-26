#include <stdio.h>

int main()
{
	long long n, l, r, sum1, sum2;

	scanf ("%lld", &n);
	//sum = 0;

	for (int i = 0; i < n; i++)
	{
		scanf ("%lld %lld", &l, &r);
		if (l < r)
		{
			l--;
			sum1 = l * (l + 1) / 2;
			sum2 = r * (r + 1) / 2;
			printf ("%lld\n", sum2 - sum1);
		}
		else
		{
			r--;
			sum1 = l * (l + 1) / 2;
			sum2 = r * (r + 1) / 2;
			printf ("%lld\n", sum1 - sum2);
		}

		/*
		for (int z = l; z <= r; z++)
		{
			sum = sum + z;
		}
		*/
		//sum = 0;
	}
	return (0);
}
