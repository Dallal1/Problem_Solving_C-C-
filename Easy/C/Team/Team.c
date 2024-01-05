#include <stdio.h>

int main()
{
	int n;
	int p, v, t;
	int top;

	top = 0;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf ("%d %d %d", &p, &v, &t);
		if (p == 1 && v == 1 || p == 1 && t == 1 || v == 1 && t == 1)
		{
			top += 1;
		}
	}
	printf ("%d", top);

	return (0);
}
