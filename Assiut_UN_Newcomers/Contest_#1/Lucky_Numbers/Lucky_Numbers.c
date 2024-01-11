#include <stdio.h>

int main()
{
	int a, re1, re2;
	float rf1, rf2, first, secen;

	scanf ("%d", &a);
	first = (a / 10) % 10; 
	secen = a % 10;		
	//printf ("%d\n", first);
	//printf ("%d\n", secen);
	
	rf1 = first / secen; //printf ("%f\n", rf1);
	rf2 = secen / first; //printf ("%f\n", rf2);
	re1 = first / secen; //printf ("%d\n", re1);
	re2 = secen / first; //printf ("%d\n", re2);

	if (rf1 - re1 == 0 || rf2 - re2 == 0)
		printf ("YES");
	else
		printf ("NO");
	return (0);
}
