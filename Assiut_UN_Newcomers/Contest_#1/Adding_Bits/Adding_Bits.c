#include <stdio.h>

int main()
{
	int a, b, ia, ia1, ib, ib1;
	int ra[32];
	int rb[32];

	ia = 0;
	ia1 = 0;
	ib = 0;
	ib1 = 0;

	scanf ("%d %d", &a, &b);

	//a
	while (a != 0 && ia1 < sizeof(ra) / sizeof(ra[0]))
	{
		ia = a % 2;
		ra[ia1] = ia;
		ia1++;
		a = a / 2;
	}
	//b
	while (b != 0 && ib1 < sizeof(ra) / sizeof(ra[0]))
	{
		ib = b % 2;
		rb[ib1] = ib;
		ib1++;
		b = b / 2;
	}

	int resualt[32];
	int carry = 0;

	for (int j = 0; j <= 32; j++)
	{
		int sum = ra[j] + rb[j] + carry;
		resualt[j] = sum % 2;
		carry = sum / 2;	
	}

	int leadingZeros = 1;

    for (int j = 31; j >= 0; j--) {
        if (resualt[j] == 1) {
            leadingZeros = 0;
        }

        if (!leadingZeros) {
            printf("%d", resualt[j]);
        }
    }

    if (leadingZeros) {
        printf("0");
    }
	/*
	for (int j = ia1 - 1; j >= 0; j--) 
	{
        printf("%d", ra[j]);
    }
	printf ("\n");
	for (int j = ib1 - 1; j >= 0; j--) 
	{
        printf("%d", rb[j]);
    }
	*/
	return (0);
}
