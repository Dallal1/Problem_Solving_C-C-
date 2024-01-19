#include <stdio.h>

int main()
{
	int l, i;

	scanf ("%d", &l);
	i = 1;

	while (l > 0)
	{
		while (i <= l)
		{
			printf ("*");
			i++;
		}
		printf ("\n");
		i = 1;
		l--;
	}
	return (0);
}
