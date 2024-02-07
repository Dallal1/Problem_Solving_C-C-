#include <stdio.h>

int main()
{
	int lin, result, flag, min;

	scanf ("%d", &lin);
	flag = 1;
	result = 0;

	while (lin--)
	{
		int size;
		scanf ("%d", &size);
		int arr[size];
		for (int i = 0; i < size; i++)
		{
			scanf ("%d", &arr[i]);
		}
		for (int z = 1; z <= size; z++)
		{
			for (int x = z + 1; x <= size; x++)
			{
				result = (arr[z-1] + arr[x-1]) + (x-z);
				if (flag == 0 && min > result)
				{
					min = result;
				}
				if (flag)
				{
					min = result;
					flag = 0;
				}
				result = 0;
			}
		}
		flag = 1;
		printf ("%d", min);
	}
	return (0);
}
