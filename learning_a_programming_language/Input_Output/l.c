#include <stdio.h>

int main ()
{
    int n, h = 0, m, s;
    scanf ("%d", &n);
    s = n % 60;
    h = n / 3600;
    n = n - h * 3600;
    h = h % 24;
    m = n / 60 % 60;
    printf ("%d%s", h, ":");
    printf ("%d%d%s", m / 10, m % 10, ":");
    printf ("%d%d", s / 10, s % 10);
    return 0;
}
