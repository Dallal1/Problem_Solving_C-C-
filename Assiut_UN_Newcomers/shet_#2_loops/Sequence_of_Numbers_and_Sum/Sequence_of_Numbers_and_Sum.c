// C
/*
#include <stdio.h>

void chek(int n, int m)
{
	int rem, ren, re1, re2;

	rem = m;
	ren = n;
	re1 = 0;
	re2 = 0;

	if (n == m)
	{
		printf ("%d %d sum =%d\n", n, m, n + m);
	}

	while (n > m)
	{
		printf ("%d ", m);
		m++;
		rem += m;
		re1++;
	}
	if (re1 > 0)
		printf ("%d sum =%d\n", m, rem);

	while (n < m)
	{
		printf ("%d ", n);
		n++;
		ren += n;
		re2++;
	}
	if (re2 > 0)
		printf ("%d sum =%d\n", n, ren);
}

int main()
{
	int n, m;

	while (scanf ("%d %d", &n, &m))
	{
		if (n > 0 && m > 0)
			chek (n, m);
		if (n <= 0 || m <= 0)
			return (0);
	}
	return (0);
}
*/

// C++

#include <iostream>

using namespace std;

int main()
{
    int n, m, min, max;
    long long sum = 0;
    
    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
            return 0;
        if (n >= m)
        {
            min = m;
            max = n;
        }
        else
        {
            min = n;
            max = m;
        }
        
        for (int i = min; i <= max; i++)
        {
            cout << i << " ";
            sum += i;
        }
		cout << "sum =" << sum << endl;
		m = 0;
		n = 0;
		sum = 0;
    }
}