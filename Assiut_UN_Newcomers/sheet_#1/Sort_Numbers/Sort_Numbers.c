#include <stdio.h>

int main()
{
	int a, b, c;

	scanf ("%d %d %d", &a, &b, &c);
	if (a <= b && a <= c && b <= c)
		printf ("%d\n%d\n%d", a, b, c);
	else if (a <= b && a <= c && c <= b)
		printf ("%d\n%d\n%d", a, c, b);
	else if (b <= a && b <= c && a <= c)
		printf ("%d\n%d\n%d", b, a, c);
	else if (c <= a && c <= b && a <= b)
		printf ("%d\n%d\n%d", c, a, b);
	else if (c <= a && c <= b && b <= a)
		printf ("%d\n%d\n%d", c, b, a);
	else if (b <= a && b <= c && c <= a)
		printf ("%d\n%d\n%d", b, c, a);
	printf ("\n\n%d\n%d\n%d", a, b, c);
	return (0);
}
