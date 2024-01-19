#include <stdio.h>

int main()
{
	int n;
	char s[n];
	int i;
	int topA, topD;

	topA = 0;
	topD = 0;
	i = 0;
	scanf ("%d", &n);
	scanf ("%s", &s);
	
	while (s[i] != '\0')
	{
		if (s[i] == 65)
		{
			topA += 1;	
		}
		if (s[i] == 68)
		{
			topD += 1;
		}
		i++;
	}

	if (topA > topD)
	{
		printf ("Anton");
	}
	else if (topD > topA)
	{
		printf ("Danik");
	}
	else
	{
		printf ("Friendship");
	}

	return (0);
}
