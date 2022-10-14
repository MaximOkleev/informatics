#include <stdio.h>

int main(){
	int count_numbers = 0;
	int current_number = 0;
	int count_zero = 0;
	
	scanf("%d", &count_numbers);

	while(count_numbers-- > 0){
		scanf("%d", &current_number);
		if(!current_number)
		{
		    count_zero++;
		}
	}
	
	printf("%d", count_zero);
	return 0;
}
