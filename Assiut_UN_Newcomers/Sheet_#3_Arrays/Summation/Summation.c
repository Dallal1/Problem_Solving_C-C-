#include <stdio.h>

int main()
{
	long long lin, nums, size, re;

	scanf ("%lld", &lin);
	int arr[lin];
	size = lin;
	re = 0;

	for (int i = 0; i < lin; i++)
	{
		scanf ("%lld", &nums);
		arr[i] = nums;
	}
	for (int i = 0; i < size; i++)
	{
		re = re + arr[i]; 
	}
	if (re < 0)
	{
		re *= -1;
		printf ("%lld", re);
	}
	else
		printf ("%lld", re);
	
	return (0);
}
