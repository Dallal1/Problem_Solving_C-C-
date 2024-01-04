#include <stdio.h>


int main()
{
	int h;
	int i;

	printf("Enter The Number Frend: ");
	scanf("%d", &i);
	printf("Enter The Higet: ");
	scanf("%d", &h);
	printf("%d %d\n", i, h);
	
	int n[i];
	int l;
	int top;

	top = 0;
	l = 0;
	for(int j = 0; j < i; j++)
	{
		scanf("%d", &n[j]);
	}
	while (n[l] != '\0')
	{
		if (n[l] > h)
		{
			top = top + 2;	
		}
		if (n[l] <= h)
		{
			top = top + 1;
		}
		l++;
	}
	for(int g = 0; g < i; g++)
	{
		printf ("%d ", n[g]);
	}
	printf ("\n%d", top);
	return (0);
}
