#include <stdio.h>
int main(){
	
	int i,j,n;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(i<n){
		
			int j=0;
			while(j<n){
				printf("*");
				j++;
					}
		
		printf("\n");
		i++;
	}
	
	return 0;
}
