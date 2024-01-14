#include <stdio.h>

int main()
{
	long long n, i, nums, sum, re;

	i = 0;
	re = 1;
	sum = 0;
	scanf ("%lld", &n);

	while (i < n)
	{
		scanf ("%lld", &nums);
		while (nums > 0)
		{
			sum += 1;
			re *= sum;
			//printf ("%d\n", re);
			nums--;
		}
		printf ("%lld\n", re);
		re = 1;
		sum = 0;
		i++;
	}
	//printf ("%d", re);

	return (0);
}
