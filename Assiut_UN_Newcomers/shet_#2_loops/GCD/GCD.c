#include <stdio.h>

int main()
{
	int n1, n2, p, re;
	
	p = 1;
	scanf ("%d %d", &n1, &n2);

	while (n1 >= p && n2 >= p)
	{
		while (n1 % p == 0 && n2 % p == 0)
		{
			re = p;
			p++;
		}
		p++;
	}
	printf ("%d", re);
	return (0);
}
