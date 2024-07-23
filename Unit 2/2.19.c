#include <stdio.h>
int main(){

int number1,number2,number3,smallest,largest;
printf("Enter three different integers: ");
scanf("%d %d %d",&number1,&number2,&number3);

		smallest=number1;
		if(number2<smallest)
			smallest=number2;
		if(number3<smallest)
			smallest=number3;
			
		largest=number1;	
		if(number2>largest)
			largest=number2;
		if(number3>largest)
			largest=number3;
	
	printf("Sum:%d\n",number1+number2);
	printf("Average:%d\n",(number1+number2+number3)/3);
	printf("Product:%d\n",number1*number2);
	printf("Smallest:%d\n",smallest);
	printf("Largest:%d\n",largest);

return 0;
}
