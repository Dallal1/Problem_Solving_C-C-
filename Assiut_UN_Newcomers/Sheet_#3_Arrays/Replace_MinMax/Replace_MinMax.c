#include <stdio.h>

int main()
{
	int n, sizeMin, sizeMax, min, max;

	scanf ("%d", &n);
	int arr[n];
	sizeMin = 0;
	sizeMax = 0;
	min = 1;
	max = 1;

	// Add the Value In The Arr
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr[i]);
	}
	// Giv my postion min numbrt
	while (min < n)
	{
		if (arr[sizeMin] > arr[min])
		{
			sizeMin = min;
			min++;
		}
		min++;
	}
	// Gin my potion max number
	while (max < n)
	{
		if (arr[sizeMax] < arr[max])
		{
			sizeMax = max;
			max++;
		}
		max++;
	}
	// Swap
	//int temp = arr[sizeMin];
	//arr[sizeMin] = arr[sizeMax];
	//arr[sizeMax] = temp;
	for (int i = 0; i < n; i++)
	{
		printf ("%d ", &arr[i]);
	}

	//printf ("%d %d", sizeMin, sizeMax);
	return (0);
}
