#include <stdio.h>

int main()
{
	int lin, nums, size, val;

	scanf ("%d", &lin);
	int arr[lin];
	size = lin;

	// Add The Numbers In The Arr 
	for (int i = 0; i < lin; i++)
	{
		scanf ("%d", &nums);
		arr[i] = nums;
	}
	// The Is May Value
	scanf ("%d", &val);
	// Searchign In The Arr
	for (int z = 0; z < size; z++)
	{
		if (arr[z] == val)
		{
			printf ("%d", z);
			break;
		}
		else if (arr[z] != val && z == (size - 1))
		{
			printf ("-1");
			break;
		}
	}

	return (0);
}
