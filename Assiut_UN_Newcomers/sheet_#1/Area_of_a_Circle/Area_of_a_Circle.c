#include <stdio.h>
 
int main()
{
    float r, x, re1, re2;
    
    x = 3.141592653;
    scanf ("%f", &r);
    re1 = r * r;
    re2 = re1 * x;
    printf ("%.9f", re2);
    return (0);
}