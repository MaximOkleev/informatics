#include <stdio.h>

int main()
{
    int v;
    scanf("%d", &v);
    int a = (v/ 1000);
    int s = (v / 100 % 10);
    int d = (v / 10 % 10);
    int f = (v % 10);
    int t = (a - f)*(a - f) + (s - d)*(s - d) + 1;
    printf("%d", t);
    return 0;
}
