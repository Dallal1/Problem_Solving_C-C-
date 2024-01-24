#include <stdio.h>

int main()
{
	int lin, n;

	scanf ("%d", &lin);

	for (int i = 0; i < lin; i++)
	{
		for (int x = 0; x < lin; x++)
		{
			if (i == x && i != (lin/2) && x != (lin/2))
				printf ("\\");
			else if (i == (lin/2) && x == (lin/2))
				printf ("X");
			else if (i == ((lin-1) - x) && x != (lin/2))
				printf ("/");
			else
				printf ("*");
		}
		printf ("\n");
	}
	return (0);
}
