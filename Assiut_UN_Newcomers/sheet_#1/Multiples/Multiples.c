#include <stdio.h>

int main()
{
	float A, B, reA, reB, lestNA, lestNB;
	int NA, NB;

	scanf ("%f %f", &A, &B);
	lestNA = A / B;
	NA = lestNA;
	reA = lestNA - NA;

	lestNB = B / A;
	NB = lestNB;
	reB = lestNB - NB;

	//printf ("%f %f", reA, reB);
		
	if (reA == 0 || reB == 0)
	{
		printf ("Multiples");
	}
	else
	{
		printf ("No Multiples");
	}
	return (0);
}
