#include <stdio.h>

int main()
{
	int a, b;
	char c;

	scanf ("%d %c %d", &a, &c, &b);
	if (c == 60)
	{
		if (a < b)
			printf ("Right");
		else
			printf ("Wrong");
	}
	else if (c == 62)
	{
		if (a > b)
			printf ("Right");
		else
			printf ("Wrong");
	}
	else if (c == 61)
	{
		if (a == b)
			printf ("Right");
		else
			printf ("Wrong");
	}
	return (0);
}
