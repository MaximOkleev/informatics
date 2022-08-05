#include <stdio.h>

int main ()
{
    int h, a, b;
    scanf ("%d%d%d", &h, &a, &b);
    printf ("%d",(h - 2 * b + a - 1) / (a - b));
    return 0;
}
