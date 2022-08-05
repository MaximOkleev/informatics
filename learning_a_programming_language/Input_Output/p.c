#include <stdio.h>

int main()
{
    int a,b,n,e,r,t;
    scanf("%d%d%d%d%d%d",&a,&b, &n, &e, &r, &t);
    printf("%d",(e - a) * 3600 + (r - b) * 60 + t - n);
    return 0;
}
