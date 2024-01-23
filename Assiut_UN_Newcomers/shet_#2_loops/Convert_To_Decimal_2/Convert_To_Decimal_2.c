#include <stdio.h>

int main()
{
	int n, num, size, res,resEnd, max;
	int arr[32];

	scanf ("%d", &n);
	size = 0;
	res = 1;
	max = 1;
	resEnd = 0;

	while (n > 0)
	{
		scanf ("%d", &num);

		// Loob "10101"
		while (num > 0)
		{
			arr[size] = num % 2;
			size++;
			num = num / 2;
		}

		// Loob Loob Clean And Collection "111" = 7
		// Size = 4 - 1 = (3 index);
		size = size - 1;
		while (size >= 0)
		{
			if (arr[size] == 1)
			{
				res = res * 2;
				// This code will run once if the final total = 1
				if (max > 0)
				{
					res = 1;
					max--;
				}
				resEnd = resEnd + res;
				size--;
			}
			else
				size--;
		}
		printf ("%d\n", resEnd);

		// return
		size = 0;
		res = 1;
		max = 1;
		resEnd = 0;
		n--;
	}
	return (0);
}