#include <stdio.h>

int main()
{
	int a;
	int b;
	int top;

	top = 0;
	scanf ("%d %d", &a, &b);
	while (a <= b)
	{
		a *= 3;
		b *= 2;
		top++;
	}
	printf ("\n%d", top);
	return (0);
}
