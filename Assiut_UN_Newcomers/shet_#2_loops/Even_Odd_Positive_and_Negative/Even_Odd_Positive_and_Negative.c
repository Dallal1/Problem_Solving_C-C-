#include <stdio.h>

int main()
{
	int n, i, nums, eve, odd, pos, nig;

	i = 1;
	eve = 0;
	odd = 0;
	pos = 0;
	nig = 0;
	scanf ("%d", &n);
	
	while (i <= n)
	{
		scanf ("%d", &nums);
		if (nums % 2 == 0)
			eve++;
		if (nums % 2 != 0)
			odd++;
		if (nums > 0)
			pos++;
		if (nums < 0)
			nig++;
		i++;
	}

	printf ("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", eve, odd, pos, nig);
	return (0);
}
