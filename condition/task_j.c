#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (abs(c - a) <= 1 && abs(d - b) <= 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

