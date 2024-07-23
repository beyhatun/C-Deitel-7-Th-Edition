#include <stdio.h>
int main(){
	
	int number1,number2;
	printf("Enter numbers:");
	scanf("%d %d",&number1,&number2);
	
	printf("Sum:%d\n",number1+number2);
	printf("Product:%d\n",number1*number2);
	printf("Difference:%d\n",number1-number2);
	printf("Quotient:%d\n",number1/number2);
	printf("Remainder:%d\n",number1%number2);
	
	
	return 0;
}
