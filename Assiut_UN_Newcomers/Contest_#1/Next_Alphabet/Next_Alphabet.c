#include <stdio.h>

int main()
{
	char ch;
	scanf ("%c", &ch);
	if (ch == 122)
		printf ("a");
	else
		printf ("%c", ch + 1);
	return (0);
}
