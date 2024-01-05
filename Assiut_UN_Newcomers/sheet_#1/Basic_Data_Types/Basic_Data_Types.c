#include <stdio.h>

int main()
{
	int n = 3;
	long long l = 12345678912345;
	char ch = 'a';
	float f = 334.23;
	double d = 14049.30493;

	//scanf ("%d %lld %c %f %lf", &n, &l, &ch, &f, &d);
	printf ("%d\n%lld\n%c\n%.2f\n%.1lf", n, l, ch, f, d);
	return (0);
}
