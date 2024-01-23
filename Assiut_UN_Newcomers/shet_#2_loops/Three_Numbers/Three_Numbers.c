#include <stdio.h>

int main()
{
	int k, s, counter;

	scanf ("%d %d", &k, &s);
	counter = 0;

	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			if (s - i - j >= 0 && s - i - j <= k)
				counter++;	
		}
	}

	printf ("%d", counter);

	return (0);
}
