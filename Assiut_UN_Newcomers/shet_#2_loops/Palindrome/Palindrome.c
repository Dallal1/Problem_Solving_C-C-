#include <stdio.h>

int main ()
{
	int result = 0;
	int num, remainder;
	
	scanf ("%d", &num);
	int q = num;
	while (q > 0)
	{
		remainder = q % 10;
		result = result * 10 + remainder;
		q = q / 10;
	}
	if (result == num)
		printf ("%d\nYES", result);
	else
		printf ("%d\nNO", result);
	return (0);
}
