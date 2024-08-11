#include <stdio.h>
int main(){
	
	int a=3;
	
	printf("A\tA+2\tA+4\tA+6\n\n");
	
	while(a<18){
		printf("%d\t%d\t%d\t%d\n",a,a+2,a+4,a+6);
		a+=3;
	}
	
	return 0;
}
