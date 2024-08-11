#include <stdio.h>
int main(){
	
	int x,i=1;
	float e = 1.0,fact=1.0;
	
		printf("Enter number:");
		scanf("%d",&x);
			
			while(i<=x){
				fact*=i;
				e=e+(1.0/fact);
				i++;	
			}

			printf("e:%.15f",e);
			
	return 0;
}
