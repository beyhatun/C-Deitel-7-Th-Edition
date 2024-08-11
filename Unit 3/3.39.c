#include <stdio.h>
int main(){
	
	int number,counter;
	
	printf("Enter number:");
	scanf("%d",&number);
	
	if(number%10==7)
		counter++;
	while(number/10!=0){
		number=number/10;
		if(number%10==7)
			counter++;
	}
		printf("%d",counter);
	
	return 0;
}
