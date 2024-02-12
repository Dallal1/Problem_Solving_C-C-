#include <stdio.h>

int main()
{
	int n, chek, size, re, possibel;

	scanf ("%d", &n);
	int arr[n];
	chek = 0;
	size = 0;
	possibel = 0;

	// Add Teh Value in the arr
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr[i]);
	}
	// Chek If Teh Numbers Is Not Odd
	while (chek != 1)
	{
		while (size < n)
		{
			if (arr[size] % 2 == 1 || arr[size] == 0)
			{
				printf ("%d", possibel);
				return (0);
			}
			arr[size] /= 2;
			size++;
		}
		possibel++;
		size = 0;
	}	
	return (0);
}
