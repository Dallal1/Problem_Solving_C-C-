#include <stdio.h>

int main()
{
	int n, k, valu, count, min, flag;

	scanf ("%d %d", &n, &k);
	flag = 0;
	count = 0;

	for (int i = 1; i <= n; i++)
	{
		scanf ("%d", &valu);
		if (flag == 0)
		{
			min = valu;
			flag = 1;
			count++;
		}
		else
		{
			if (min > valu)
			{
				min = valu;
				count++;
			}
			else
				count++;
		}
		if (count == k || n == i)
		{
			printf ("%d ", min);
			count = 0;
			flag = 0;
		}
	}
	return (0);
}
