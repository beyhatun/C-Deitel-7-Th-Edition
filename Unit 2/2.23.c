#include <stdio.h>
int main(){
	
	int number1,number2,number3,number4,number5,smallest,largest;
	printf("Enter Numbers:");
	scanf("%d %d %d %d %d",&number1,&number2,&number3,&number4,&number5);
	
	smallest=number1;
	if(number2<smallest)
		smallest=number2;
	if(number3<smallest)
		smallest=number3;
	if(number4<smallest)
		smallest=number4;
	if(number5<smallest)
		smallest=number5;
	printf("Smallest:%d\n",smallest);
	
	largest=number1;
		if(number2>largest)
		largest=number2;
		if(number3>largest)
		largest=number3;
		if(number4>largest)
		largest=number4;
		if(number5>largest)
		largest=number5;
		
	printf("Largest:%d",largest);
	
	return 0;
}
