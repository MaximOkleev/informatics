#include <stdio.h>

int main ()
{
    int h, a;
    scanf ("%d%d", &h, &a);
    if(h > a)
        printf ("%d",1);
    else if (a > h)
        printf ("%d",2);
    else 
        printf ("%d",0);
    return 0;
}
