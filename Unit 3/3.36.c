#include <stdio.h>
#include <math.h>
int main(){
	
	int binaryNumber,decimalNumber,total=0,oneDigit,exponential=1;
	
	printf("Please Enter binary number at most 5 digits:");
	scanf("%d",&binaryNumber);
	
		oneDigit = binaryNumber%10;
		
		while((binaryNumber/10)!=0){
			binaryNumber/=10;
			decimalNumber=binaryNumber%10;
			total = total +(decimalNumber * pow(2,exponential));
			exponential++;
		}	
			total = total +(oneDigit * pow(2,0));

		printf("Decimal Number:%d",total);

	
	return 0;
}
