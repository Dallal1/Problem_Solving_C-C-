#include <stdio.h>

int main()
{
	int lin, nums;

	scanf ("%d", &lin);
	int arr[lin];

	// Add Number In The Arr And Che If Pos = 1 If Ng = 2
	for (int i = 0; i < lin; i++)
	{
		scanf ("%d", &nums);
		if (nums < 0)
			nums = 2;
		else if (nums > 0)
			nums = 1;
		arr[i] = nums;
	}

	// Prin The Value IN The Arr
	for (int i = 0; i < lin; i++)
	{
		printf ("%d ", arr[i]);
	}

	return (0);
}
