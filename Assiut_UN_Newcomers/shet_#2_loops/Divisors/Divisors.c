#include <stdio.h>

int main()
{
	int n, p;
	
	p = 1;
	scanf ("%d", &n);

	while (n >= p)
	{
		while (n % p == 0)
		{
			printf ("%d\n", p);
			p++;
		}
		p++;
	}
	return (0);
}
