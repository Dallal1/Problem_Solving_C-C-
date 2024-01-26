#include <stdio.h>

int main()
{
	long long lin, nums, re1, re2;

	scanf ("%lld", &lin);
	re2 = 0;

	while (lin > 0)
	{
		scanf ("%lld", &nums);
		re1 = 0;
		while (nums % 2 == 0)
		{
			nums /= 2;
			re1++;
		}
		if (re1 >= re2)
		{
			re2 = re1;
		}
		lin--;
	}
	printf ("%lld", re2);
	return (0);
}
