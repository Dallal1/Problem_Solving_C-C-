#include <stdio.h>

void chek(int nums)
{
	int p, digit;

	p = nums;
	digit = 0;
	while (p != 0)
	{
		digit = p % 10;
		printf ("%d ", digit);
		digit = 0;
		p /= 10;
	}
}

int main()
{
	int l, nums;

	scanf ("%d", &l);

	while (l > 0)
	{
		scanf ("%d", &nums);
		chek(nums);
		printf ("\n");
		l--;
	}
	return (0);
}
