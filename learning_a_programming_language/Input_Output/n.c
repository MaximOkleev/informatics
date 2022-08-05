#include <stdio.h>

int main()
{
    int n = 1;
    scanf("%d", &n);
    int time = 9*60 + 45*n + 5*(n/2) + 15*(n/2) - 15*!(n % 2);
    printf("%d %d", time / 60, time % 60);
    return 0;
}
