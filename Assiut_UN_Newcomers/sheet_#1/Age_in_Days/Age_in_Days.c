#include <stdio.h>

int main()
{
	int n, y, a;

	scanf ("%d", &n);
	y = n / 365;
	n -= y * 365;
	a = n / 30;
	n -= a * 30;

	/*
	y = 0;
	a = 0;
	if (n >= 365)
	{
		while (n >= 365)
		{
			n -= 365;
			y++;
		}
	}
	if (n < 365 && n >= 30)
	{
		while (n < 365 && n >= 30)
		{
			n -= 30;
			a++;
		}
	}*/
	printf ("%d years\n%d months\n%d days", y, a, n);
	return (0);
}
