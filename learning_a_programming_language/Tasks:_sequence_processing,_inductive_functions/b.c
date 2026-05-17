#include <stdio.h>

int main()
{
    int n;
    int cnt = 0;
    
    while (scanf("%d", &n)){
        if (n > 0){
            cnt += n;
        }
        else if(n == 0){
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}

