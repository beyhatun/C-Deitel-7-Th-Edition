#include <stdio.h>
int main(){
	
	int counter,number,largest;
	
	while(counter<10){
		
	printf("Enter Numbers:");
	scanf("%d",&number);
		counter++;
		if(number>largest)
			largest=number;
	}
	printf("/nLargest:%d",largest);
	
	return 0;
}
