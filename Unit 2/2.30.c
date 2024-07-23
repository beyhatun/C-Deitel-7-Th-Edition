#include <stdio.h>
int main(){
	
	int number,oneDigit,twoDigit,threeDigit,fourDigit,fiveDigit;
	printf("enter one five-digit number:");
	scanf("%d",&number);
	
	
	fiveDigit=number/10000;
	fourDigit=(number/1000)%10;
	threeDigit=(number/100)%10;
	twoDigit=(number/10)%10;
	oneDigit=number%10;
	
	printf("Result:%d  %d  %d  %d  %d",fiveDigit,fourDigit,threeDigit,twoDigit,oneDigit);
	
	
	
	
	
	return 0;
}

