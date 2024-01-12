#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x;
	while (true)
	{
		scanf ("%d", &x);
		if (x == 1999)
		{
			printf ("Correct");
			break;
		}
		else
			printf ("Wrong\n");

	}
	return (0);
}
