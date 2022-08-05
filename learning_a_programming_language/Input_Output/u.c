#include <stdio.h>

int main ()
{
    int a = 0, b = 0;
    scanf ("%d%d", &a, &b);
    int c = a % b;
    int d = b % a;
    a = c * d+1;
    printf ("%d", a);
    return 0;
}
