#include <stdio.h>
int main(){
	
	int fact=1,x;
	
		printf("Enter number:");
		scanf("%d",&x);
			
			while(x!=0){
				fact=fact*x;
				x--;
				
			}
			printf("Fact:%d",fact);
	
	return 0;
}
