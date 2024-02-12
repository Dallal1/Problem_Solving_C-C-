#include <stdio.h>

int main()
{
	long long arr[55];

	arr[1] = 0;
	arr[2] = 1;

	int n;
	scanf ("%d", &n);

	for (int i = 3; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];

	}
	printf ("%lld", arr[n]);
	return (0);
}
