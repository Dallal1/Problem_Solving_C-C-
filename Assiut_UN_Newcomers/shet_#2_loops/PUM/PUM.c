#include <stdio.h>

int main()
{
	int n, thre, i;

	scanf ("%d", &n);
	i = 0;
	thre = 3;

	while (n > 0)
	{
		while (thre > 0)
		{
			i++;
			printf ("%d ", i);
			thre--;
		}
		printf ("PUM\n");
		thre = 3;
		i++;
		n--;
	}
	return (0);
}
