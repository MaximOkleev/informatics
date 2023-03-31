#include <stdio.h>

int main()
{
    int n = 0;
    int cnt = 0;
    
    while (scanf("%d", &n)) {
        if (n > 0) {
            cnt++;
        }
        else {
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}

