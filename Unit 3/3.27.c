#include <stdio.h>
int main(){
	
	int number,counter,largest,secondLargest;
	
	while(counter<5){
		
		printf("Enter Numbers:");
		scanf("%d",&number);
	
		if(number>largest){
			secondLargest=largest;
			largest=number;
		}
				
		else if(number>secondLargest)
			secondLargest=number;
		
		counter++;
	}
	
		printf("Largest:%d\n",largest);
		printf("Second Largest:%d",secondLargest);
	return 0;
}
