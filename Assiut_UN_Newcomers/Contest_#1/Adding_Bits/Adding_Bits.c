#include <stdio.h>

int main()
{
	int a, b, c;

	scanf ("%d %d", &a, &b);
	c = a ^ b;
	printf ("%d", c);
	return (0);
}
/*
#include <stdio.h>
#include <math.h>

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
	int rab;
	double all[32], p, n;

	p = 2.0;
	if(ia1 >= ib1)
		rab = ia1;
	else
		rab = ib1;

	for (int j = rab - 1; j >= 0; j--) 
	{
        	printf("%d", resualt[j]);
    	}
	printf ("\n");
	
	for (int i = rab; i >= 0; i--)
	{
		all[i] = resualt[i] * pow(p, i);
		//printf ("%.0lf", all[1]);
	}
	
	double d = 0;
	for (int i = 0; i <= rab - 1; i++)
	{
		d += all[i];
		//printf ("%.0lf", all[1]);
		//printf ("%.0lf", all[2]);
		//printf ("%.0lf", all[3]);
	}
	printf ("%0.lf", d);
	return (0);
}
*/
