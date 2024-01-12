#include <stdio.h>

int main()
{
	int n, i;

	i = 1;
	scanf ("%d", &n);

	
	while (i <= n)
	{
		if (i % 2 == 0)
		{
			printf ("%d", i);
			if (i < n - 1)
			{
				printf ("\n");
			}
		}
		if (n == 1)
			printf ("-1");
		i++;
	}
	
	return (0);
}