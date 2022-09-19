#include <stdio.h>

int main(){
	int n = 0;
	int schit = 0;
	int count_zero = 0;
	
	scanf("%d", &n);
	scanf("%d", &schit);
	n--;

	while(n > 0){
		scanf("%d", &schit);
		if(schit == 0)
		{
		    count_zero++;
		}
		n--;
	}
	
	printf("%d",count_zero);
	return 0;
}
