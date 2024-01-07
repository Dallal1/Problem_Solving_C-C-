#include <stdio.h>

int main()
{
	int a, b, n, re;
	char c, e;

	scanf ("%d %c %d %c %d", &a, &c, &b, &e, &n);
	if (c == 43)
	{
		re = a + b;
		if (re == n)
			printf ("Yes");
		else
			printf ("%d", re);
	}
	else if (c == 45)
	{
		re = a - b;
		if (re == n)
			printf ("Yes");
		else
			printf ("%d", re);
	}
	else if (c == 42)
	{
		re = a * b;
		if (re == n)
			printf ("Yes");
		else
			printf ("%d", re);
	}
	return (0);
}