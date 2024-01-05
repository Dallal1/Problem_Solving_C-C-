#include <stdio.h>

int main()
{
	long long int X, Y;
	
	scanf ("%lld %lld", &X, &Y);
	printf ("%lld + %lld = %lld", X, Y, X + Y);
	printf ("\n%lld * %lld = %lld", X, Y, X * Y);
	printf ("\n%lld - %lld = %lld", X, Y, X - Y);

	return (0);
}
