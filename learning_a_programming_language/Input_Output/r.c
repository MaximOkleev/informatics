#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",(n - k % n) % n);
    return 0;
}
