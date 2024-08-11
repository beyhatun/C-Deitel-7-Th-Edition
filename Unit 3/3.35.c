#include <stdio.h>
int main(){
	
	int number,oneDigit,twoDigit,threeDigit,fourDigit,fiveDigit;
	
	printf("Enter five digit number:");
	scanf("%d",&number);
	
	fiveDigit=(number/10000)%10;
	fourDigit=(number/1000)%10;
	threeDigit=(number/100)%10;
	twoDigit=(number/10)%10;
	oneDigit=number%10;
	
	if(oneDigit==fiveDigit && twoDigit==fourDigit)
		printf("is the palindrome number.");
	else
		printf("It is not a palindrome number.");

	return 0;
}
