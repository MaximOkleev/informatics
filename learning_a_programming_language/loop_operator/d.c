#include <stdio.h>
#include <assert.h>
#include <complex.h>
#include <float.h>
#include <fenv.h>
#include <math.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    if(n % 2 == 1 && n != 1) printf("NO");
    else if (n == 1) printf("YES");
    else {
	while(n % 2 == 0 && n > 0){
		n /= 2;
	}
	if (n != 1) printf("NO");
	else printf("YES");
    }
    return 0;
}
