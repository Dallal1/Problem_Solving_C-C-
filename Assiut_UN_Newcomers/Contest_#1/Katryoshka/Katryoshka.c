#include <stdio.h>

int main()
{
	long long a, b, c, o, p, re;

	scanf ("%lld %lld %lld", &a, &b, &c);
	
	if (a == 0 || c == 0)
		printf ("0");
	else if (b == 0 && a <= c)
	{
		if (a == 1)
			printf ("1");
		else
			printf ("%lld", a / 2);
	}
	else if (b == 0 && a >= c)
	{
		if (a / 2 > c)
			printf ("%lld", c);
		else
			printf ("%lld", a / 2);
	}
	else
	{
		if (a == b  && a == c)
			printf ("%lld", a);
		else if (a <= b && a <= c)
			printf ("%lld", a);
		else if (c <= a && c <= b)
			printf ("%lld", c);
		else if (b >= a && b >= c)
		{
			if (a <= c)
				printf ("%lld", a);
			else if (c <= a)
				printf ("%lld", c);
		}
		else if (b <= a && b <= c)
		{
			o = a - b;
			p = c - b;
			re = o / 2;
			if (re <= p)
				printf ("%lld", re + b);
			else
				printf ("%lld", p + b);
		}
	}
	return (0);
}
