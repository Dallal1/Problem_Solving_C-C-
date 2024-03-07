#include <stdio.h>

int add(int x, int y)
{
	return (x + y);
}

int main()
{
	int x, y;

	scanf ("%d %d", &x, &y);
	printf ("%d", add(x, y));
	return (0);
}
