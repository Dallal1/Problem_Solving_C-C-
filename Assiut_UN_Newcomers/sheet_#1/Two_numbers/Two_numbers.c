#include <stdio.h>

int main()
{
	float re, A, B, lestN;
	int N;
	
	scanf ("%f %f", &A, &B);
	re = A / B;
	N = re;
	lestN = re - N;

	//floor		
	printf ("floor %d / %d = %d", (int)A, (int)B, (int)re);
	//ceil
	if (lestN == 0)
	{
		printf ("\nceil %d / %d = %d", (int)A, (int)B, (int)re);
	}
	else
	{
		printf("\nceil %d / %d = %d", (int)A, (int)B, (int)re + 1);
	}
	//round
	if (lestN >= 0.5)
	{
		printf ("\nround %d / %d = %d", (int)A, (int)B, (int)re + 1);
	}
	else
	{
		printf ("\nround %d / %d = %d", (int)A, (int)B, (int)re);
	}
	//printf ("\n%f", lestN);
	return (0);
}
