#include <stdio.h>

int main ()
{
    int v = 0, t = 0;
    scanf ("%d%d", &v, &t);
    int s = ((109+v*t % 109)%109);
    printf ("%d", s);
    return 0;
}
