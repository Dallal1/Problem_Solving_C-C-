#include <stdio.h>

int main()
{
	int temp;
	int n, i;
	int r;

	r = 0;
	i = 0;
	scanf ("%d", &n);
	int a[n];

	while (i < n)
	{
		scanf ("%d", &a[i]);
		i++;
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	while (r < n)
	{
		printf ("%d ", a[r]);
		r++;
	}
	return (0);
}
