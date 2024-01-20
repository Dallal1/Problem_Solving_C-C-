#include <stdio.h>

void check(int n, int m)
{
	int min, max, sum;
	
	if (n > m)
	{
		min = m + 1;
		max = n;
	}
	else
	{
		min = n + 1;
		max = m;
	}
	sum = 0;

	while (min < max)
	{
		if (min % 2 == 1)
		{
			sum += min;
			min++;
		}
		else
			min++;
	}

	printf ("%d\n", sum);
	sum = 0;
	min = 0;
	max = 0;
}

int main()
{
	int l, n, m;
	long long sum;

	sum = 0;
	scanf ("%d", &l);

	while (l > 0)
	{
		scanf ("%d %d", &n, &m);
		
		check (n, m);

		l--;
	}
	return (0);
}