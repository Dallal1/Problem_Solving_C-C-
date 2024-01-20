#include <stdio.h>

int main()
{
	int n, i;

	i = 1;
	scanf ("%d", &n);

	while (i <= 12)
	{
		printf ("%d * %d = %d\n", n, i, n * i);
		i++;
	}
	return (0);
}