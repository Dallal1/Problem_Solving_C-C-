#include <stdio.h>

int main()
{
	int n, i, c;

	i = 1;
	c = 0;
	scanf ("%d", &n);

	while (i <= (n / 2))
	{
		if (n % i == 0)
		{
			c++;
			i++;
		}
		else
			i++;
	}
	if (c == 1)
		printf ("YES");
	else
		printf ("NO");


	return (0);
}
