#include <stdio.h>
int main(){
	
	int i=1,space;
	
	while(i<=64){
		
		printf("* ");
		if(i%8==0){
			printf("\n");
			space++;
		if(space%2==0)
			printf(" ");
	}
		i++;
	}
	
	return 0;
}
