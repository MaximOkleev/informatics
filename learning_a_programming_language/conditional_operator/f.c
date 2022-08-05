#include <stdio.h>
#include <math.h>

int main ()
{
    int h, a, b;
    scanf ("%d%d%d", &h, &a, &b);
    if(h >= a && h >= b)
        printf ("%d", h);
    else if (a >= b && a >= h)
        printf ("%d", a);
    else 
        printf ("%d", b);
    return 0;
}
