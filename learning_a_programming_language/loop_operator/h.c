#include <stdio.h>
#include <assert.h>
#include <complex.h>
#include <float.h>
#include <fenv.h>
#include <math.h>

int fi(int n){
    n -= 2;
    int f1 = 1;
    int f2 = 1;
    while (n > 0){
        int f3 = f2;
        f2 = f1 + f2;
        f1 = f3;
        n--;
    }
    return f2;
};

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d", fi(n));
    return 0;
}
