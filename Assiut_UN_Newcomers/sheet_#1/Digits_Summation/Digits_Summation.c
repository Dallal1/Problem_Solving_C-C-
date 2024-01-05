#include <stdio.h>

int main()
{
	long long N, M;
	int reN, reM;
	
	scanf ("%lld %lld", &N, &M);
	reN = N % 10;
	reM = M % 10;
	printf ("%d", reN + reM);
	return(0);
}
