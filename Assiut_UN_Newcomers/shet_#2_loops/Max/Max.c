#include <stdio.h>

int main()
{
	int n, i, nums, re;

	i = 0;
	re = 0;
	scanf ("%d", &n);

	while (i < n)
	{
		scanf ("%d", &nums);
		if (re < nums)
			re = nums;
		i++;
	}
	printf ("%d", re);
	return (0);
}
