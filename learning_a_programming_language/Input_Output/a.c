#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	double c = sqrt(a * a + b * b);
	printf("%lf", c);
	return 0;
}
