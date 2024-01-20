#include <stdio.h>

int main()
{
	int l, sp , i2, sum, i;

	sum = 1;
	i = 1;
	scanf ("%d", &l);
	sp = l - 1;

	while (l > 0)
	{
		//space
		while (sp > 0)
		{
			printf (" ");
			sp--;
		}
		//*
		while (sum > 0)
		{
			printf ("*");
			sum--;
		}
		printf ("\n");
		//space
		i2 = l - 2;
		sp = i2;
		//*
		i += 2;
		sum = i;
		l--;
	}
	return (0);
}
