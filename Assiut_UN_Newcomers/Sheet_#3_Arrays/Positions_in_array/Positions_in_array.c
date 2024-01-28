#include <stdio.h>

int main()
{
	int lin, nums;

	scanf ("%d", &lin);
	int arr[lin];

	// Add The Numbers In the Arr
	for (int i = 0; i < lin; i++)
	{
		scanf ("%d", &nums);
		arr[i] = nums;
		if (arr[i] <= 10)
			printf ("A[%d] = %d\n", i, arr[i]);
	}
	/*
	// Chek Position In The Arr And Print A[i] = value;
	for (int i = 0; i < lin; i++)
	{
		if (arr[i] >= 0 && arr[i] <= 10)
			printf ("A[%d] = %d\n", i, arr[i]);
	}*/
	return (0);
}
