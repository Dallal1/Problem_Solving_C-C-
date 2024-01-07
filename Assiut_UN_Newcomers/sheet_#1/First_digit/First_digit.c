#include <stdio.h>

int main()
{
	char x[100];
	char re;

	scanf ("%s", &x);
	re = x[0];
	if ((int)re % 2 == 0)
		printf ("EVEN");
	else
		printf ("ODD");

	return (0);
}
