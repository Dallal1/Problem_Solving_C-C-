#include <stdio.h>

void chek(long long nums)
{
	long long p, digit;

	p = nums;
	digit = 0;
	while (p != 0)
	{
		digit = p % 10;
		printf ("%lld ", digit);
		digit = 0;
		p /= 10;
	}
}

int main()
{
	long long l, nums;

	scanf ("%lld", &l);

	while (l > 0)
	{
		scanf ("%lld", &nums);
		chek(nums);
		printf ("\n");
		l--;
	}
	return (0);
}
