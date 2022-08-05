#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    if (abs(x1-x2)==abs(y1-y2) || (x1==x2) || (y1==y2))
        printf("%s", "YES");
    else
        printf("%s","NO");
    return 0;
}
