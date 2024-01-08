#include <stdio.h>

int main()
{
	int a, b, c, d, re1, re2, re3, re4, re5, re;

	scanf ("%d %d %d %d", &a, &b, &c, &d);
	re1 = a % 100;
	re2 = b % 100;
	re3 = c % 100;
	re4 = d % 100;
	re5 = re1 * re2 * re3 * re4;
	re = re5 % 100;
	if (re >= 0 && re <= 9)
		printf ("0%d", re);
	else
		printf ("%d", re);
	return (0);
}
