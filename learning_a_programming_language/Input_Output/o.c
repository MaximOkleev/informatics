#include <stdio.h>

int main()
{
    int a = 1, b = 1, n = 1;
    scanf("%d%d%d",&a,&b, &n);
    n = (a * 100 + b) * n;
    printf("%d %d", n / 100, n % 100);
    return 0;
}
