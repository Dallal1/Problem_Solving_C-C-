#include <stdio.h>

int main()
{
	char X;
	char re;
	
	scanf ("%c", &X);
	if (X >= 97 && X <= 122)
	{
		re = X - 32;
		printf ("%c", re);
	
	}
	else if (X >= 65 && X <= 90)
	{
		re = X + 32;
		printf ("%c", re);
	}
	return (0);
}
