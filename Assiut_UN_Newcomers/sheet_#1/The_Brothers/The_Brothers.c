#include <stdio.h>

int strcmp(char *str1, char *str2)
{
	int i, nums;

	i = 0;
	nums = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[i])
			nums += 0;
		else if (str1[i] != str2[i])
			nums += 1;
		i++;
	}
	return (nums);

}

int main()
{
	char fn1[100], fn2[100];
	char sn1[100], sn2[100];
	
	scanf ("%s %s", &fn1, &sn1);
	scanf ("%s %s", &fn2, &sn2);
	//printf ("%s %s \n%s %s", fn1, sn1, fn2, sn2);
	
	if (strcmp(sn1, sn2) == 0)
		printf ("ARE Brothers");
	else
		printf ("NOT");
	return (0);
}
