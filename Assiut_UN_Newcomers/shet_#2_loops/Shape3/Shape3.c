#include <stdio.h>

int main()
{
	int n, reN, min, reMin, max, reMax;

	scanf ("%d", &n);
	reN = n;
	min = 1;
	reMin = 1;
	max = n - 1;
	reMax = n - 1;

	while (n > 0)
	{
		// Print "Space"
		while (reMax > 0)
		{
			printf (" ");
			reMax--;
		}

		// Print "*"
		while (reMin > 0)
		{
			printf ("*");
			reMin--;
		}
		printf ("\n");

		// Print "Space"
		max--;
		reMax = reMax + max;
		// Print "*"
		min += 2;
		reMin = reMin + min;

		n--;
	}
	//printf ("%d", reMin);
	int nMin, reMinN, nMax, reMaxN;
	
	nMin = reMin - 2;
	reMinN = reMin - 2;
	nMax = 0;
	reMaxN = 0;

	while (reN > 0)
	{
		// Print "Space"
		while (reMaxN > 0)
		{
			printf (" ");
			reMaxN--;
		}

		// Print "*"
		while (reMinN > 0)
		{
			printf ("*");
			reMinN--;
		}
		printf ("\n");

		// Print  " "
		nMax++;
		reMaxN += nMax;
		// Print "*"
		nMin -= 2;
		reMinN += nMin;

		reN--;
	 }
}
