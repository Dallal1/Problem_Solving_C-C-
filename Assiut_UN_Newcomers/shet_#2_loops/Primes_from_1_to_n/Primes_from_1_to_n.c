#include <stdio.h>

int main()
{
	int n, i, c, rem;
	
	i = 1;
	c = 0;
	rem = 1;
	scanf ("%d", &n);

	while (n >= 1)
	{
		while (i <= (rem / 2))
		{
			if (rem % i == 0)
			{
				c++;
				i++;
			}
			else
				i++;
		}
		if (c == 1)
		{
			printf ("%d ", rem);
			c = 0;
			i = 1;
			n--;
			rem++;
		}
		else
		{
			c = 0;
			i = 1;
			n--;
			rem++;
		}
	}
	return (0);
}
