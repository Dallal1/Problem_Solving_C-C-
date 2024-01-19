#include <stdio.h>

int chek(int num)
{
	while (num > 0)
	{
		int digit = num % 10;
		if (digit != 4 && digit != 7)
		{
			return (0); // Its Not Lucky Number	
		}
		num /= 10;
	}
	return (1); //locky Number
}

int main()
{
	int a, b, not;

	not = 0;
	scanf ("%d %d", &a, &b);

	while (a <= b)
	{
		if (chek(a))
		{
			printf ("%d ", a);
			not = 1;
		}
		a++;
	}
	if (!not)
		printf ("-1");

	return (0);
}
