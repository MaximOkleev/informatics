#include <stdio.h>

int main()
{
    int k, n, m;
    scanf("%d %d %d", &n , &m , &k);
    if (k < m * n && (k % n == 0 || k % m == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
