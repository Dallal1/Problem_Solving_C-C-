#include <stdio.h>

void Print(int n, int y)
{
	while (n < y)
	{
		printf ("%d ", n);
		n++;
	}
	printf ("%d", y);
}

int main()
{
	int n, y;

	scanf ("%d", &y);
	n = 1;
	Print(n, y);

	return (0);
}
