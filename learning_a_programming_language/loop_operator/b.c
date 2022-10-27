#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int cnt = 0;
    
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n);i++){
        if(n % i == 0){
            printf("%d", i);
            cnt++;
        }
    }
    if(cnt == 0){
        printf("%d", n);
    }
    return 0;
}
