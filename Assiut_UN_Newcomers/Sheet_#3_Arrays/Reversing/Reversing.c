#include <stdio.h>

int main()
{
	int lin, nums;

	scanf ("%d", &lin);
	int arr[lin];

	// Add Number In The Arr
	for  (int i = 0; i < lin; i++)
	{
		scanf ("%d", &nums);
		arr[i] = nums;
	}
	
	lin -= 1;
	// Print Arr value Reversing
	for (int i = lin; i >= 0; i--)
	{
		printf ("%d ", arr[i]);
	}
	return (0);
}
