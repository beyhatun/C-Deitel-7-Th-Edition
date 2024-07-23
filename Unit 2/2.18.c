#include <stdio.h>
int main(){
	
	int number1,number2;
	printf("Enter numbers:");
	scanf("%d %d",&number1,&number2);
	
	if(number1>number2){
		printf("Number 1 is largest\n");
	}
	else if(number2>number1){
		printf("Number 2 is largest\n");
	}
	else{
		printf("These numbers are equal.");
	}
	
	
	return 0;
}
