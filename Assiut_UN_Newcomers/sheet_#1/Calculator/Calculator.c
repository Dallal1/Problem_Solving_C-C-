#include <stdio.h>

int main()
{
	int num1, num2, re;
	char c;

	scanf ("%d %c %d", &num1, &c, &num2);
	if (c == 43)
	{
		re = num1 + num2;
		printf ("%d", re);
	}
	else if (c == 45)
	{
		re = num1 - num2;
		printf ("%d", re);
	}
	else if (c == 42)
	{
		re = num1 * num2;
		printf ("%d", re);
	}
	else if (c == 47)
	{
		re = num1 / num2;
		printf ("%d", re);
	}
	return (0);
}
