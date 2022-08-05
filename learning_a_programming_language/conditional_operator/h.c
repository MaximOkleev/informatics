#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, x, y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    if (abs(a - x) == abs(b - y))
        printf("%s", "YES");
    else
        printf("%s","NO");
    return 0;
}
