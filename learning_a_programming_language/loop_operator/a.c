#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= sqrt(n);i++){
        printf("%d ", i * i);
    }
    return 0;
}
