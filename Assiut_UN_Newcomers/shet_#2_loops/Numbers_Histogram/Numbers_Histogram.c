#include <stdio.h>

int main()
{
	char s;
	int l, inL;

	scanf ("%c %d", &s, &l);

	while (l > 0)
	{
		scanf ("%d", &inL);
		if (s == '+')
		{
			while (inL > 0)
			{
				printf ("+");
				inL--;
			}
			printf ("\n");
		}
		if (s == '-')
		{
			while (inL > 0)
			{
				printf ("-");
				inL--;
			}
			printf ("\n");
		}
		if (s == '/')
		{
			while (inL > 0)
			{
				printf ("/");
				inL--;
			}
			printf ("\n");
		}
		if (s == '*')
		{
			while (inL > 0)
			{
				printf ("*");
				inL--;
			}
			printf ("\n");
		}
		l--;
	}
	return (0);
}
