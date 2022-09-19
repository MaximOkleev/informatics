#include <stdio.h>

int main(){
	int n = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d", &n);
	scanf("%d", &b);
	n--;

	while(n > 0){
		scanf("%d", &b);
		if(b == 0)
		{
		    c++;
		}
		n--;
	}
	printf("%d",c);
	return 0;
}
