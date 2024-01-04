#include <stdio.h>

int main()
{
	int n, h;
	int top = 0;

	scanf ("%d %d", &n, &h);

	for (int i = 0; i < n; i++)
	{
		int ai;
		scanf ("%d", &ai);

		if(ai > h)
		{
			top += 2;
		}
		else
		{
			top += 1;
		}
	}
	printf ("%d", top);
	return (0);
}
