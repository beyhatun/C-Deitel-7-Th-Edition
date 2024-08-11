#include <stdio.h>
int main(){
	int i=1;

	printf("N\t10*N\t100*N\t1000*N\n\n");
	
	while(i<=10){
		printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
		i++;
	}
	
	return 0;
}
