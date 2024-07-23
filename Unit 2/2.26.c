#include<stdio.h>
int main(){
	int number1,number2;
	printf("Enter the numbers:");
	scanf("%d %d",&number1,&number2);
	
	if(number1%number2==0)
		printf("the first is a multiple of the second.");
	else
		printf("The first is not a multiple of the second.");
	
	
	
	return 0;
}
