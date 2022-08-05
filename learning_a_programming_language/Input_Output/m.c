#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int c = n;
    n = m;
    m = c;
    printf("%d %d", n, m);
    return 0;
}
