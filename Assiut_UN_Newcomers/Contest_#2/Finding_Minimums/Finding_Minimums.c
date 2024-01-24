#include <stdio.h>

int main()
{
	int n, k, valu, size;

	scanf ("%d %d", &n, &k);
	
	int arr[n];
	size = 0;
	for (int i = 0; i < n; i++)
	{
		scanf ("%d ", &valu);
		arr[size] = valu;
		size++;
		if (size == (k-1))
		{
			for (int z = 0; z < i; z++)
			{
				printf ("%d", arr[z]);
			}
			size = 0;
		}
	}
	return (0);
}
