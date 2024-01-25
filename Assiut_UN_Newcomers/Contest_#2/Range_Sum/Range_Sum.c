#include <stdio.h>

int main()
{
	int n, l, r, sum;

	scanf ("%d", &n);
	sum = 0;

	for (int i = 0; i < n; i++)
	{
		scanf ("%d %d", &l, &r);
		for (int z = l; z <= r; z++)
		{
			sum = sum + z;
		}
		printf ("%d\n", sum);
		sum = 0;
	}
	return (0);
}
