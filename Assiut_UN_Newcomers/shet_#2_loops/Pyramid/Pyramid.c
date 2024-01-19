#include <stdio.h>

int main()
{
	int l, i, num;

	scanf ("%d", &l);
	i = 1;
	num = 1;

	while (l > 0)
	{
		while (i <= num)
		{
			printf ("*");
			i++;
		}
		printf ("\n");
		num++;
		i = 1;
		l--;
	}
	return (0);
}
