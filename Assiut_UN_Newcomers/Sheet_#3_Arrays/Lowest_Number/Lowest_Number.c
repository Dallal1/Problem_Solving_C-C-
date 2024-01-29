/*
#include <stdio.h>

int main()
{
	int lin, nums, index, size, newSize;

	scanf ("%d", &lin);
	int arr[lin], new[1];
	index = 0;
	size = 0;
	newSize = 1;

	// Add The Numbers In The Arr
	for (int i = 0; i < lin; i++)
	{
		scanf ("%d", &nums);
		arr[i] = nums;
	}
	new[0] = arr[0];
	// Chek Minme numbers And Maxmum Number
	while (size < lin && newSize < lin)
	{
		if (arr[size] > arr[newSize]) // 2, 1, 3
		{
			new[0] = arr[newSize];
			index = size;
			size++;
		}
		else
		{
			newSize++;
		}
	}
	if (index == 0)
		printf ("%d %d", new[0], index + 1);
	else
		printf ("%d %d", new[0], index + 2);

	return (0);
}
*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Input numbers into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the minimum number and its position
    int min = arr[0];
    int min_pos = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }

    // Print the result
    printf("%d %d\n", min, min_pos + 1);

    return 0;
}