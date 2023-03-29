#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a , &b , &c , &d);
    if(a + 2 == c && b + 1 == d || a + 1 == c && b + 2 == d || a - 1 == c && b + 2 == d || a - 2 == c && b + 1 == d || a - 2 == c && b - 1 == d || a - 1 == c && b - 2 == d || a + 1 == c && b - 2 == d || a + 2 == c && b - 1 == d)printf("YES");
    else printf("NO");
    return 0;
}

