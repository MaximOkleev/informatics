#include <stdio.h>

int main ()
{
    int a = 0, b = 0;
    scanf ("%d%d", &a, &b);
    printf ("%d", (a * (a / b) + b * (b / a) ) / (b / a + a / b) );
    return 0;
}
