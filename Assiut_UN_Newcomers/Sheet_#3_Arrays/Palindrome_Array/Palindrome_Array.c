#include <stdio.h>

int main()
{
	int lin, nums, index, ch;

	scanf ("%d", &lin);
	int arr[lin], new[lin];
	index = 0;
	ch = 0;

	// Add The Number in The Arr
	for (int i = 0; i < lin; i++)
	{
		scanf ("%d", &nums);
		arr[i] = nums;
		new[i] = nums;
	}
	
	lin -= 1;
	// Chek If == Yes else No
	while (lin >= 0)
	{
		if (new[lin] == arr[index])
		{
			index++;
			lin--;	
		}
		else
		{
			ch++;
			break;
		}
		
	}
	if (ch > 0)
		printf ("NO");
	else
		printf ("YES");
	return (0);
}
