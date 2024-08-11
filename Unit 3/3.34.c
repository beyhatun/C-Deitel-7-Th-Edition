#include <stdio.h>
int main(){
	
	int i,j,n;
	printf("Enter number:");
	scanf("%d",&n);
	
	j=1;
	while(j<=n){
		printf("*");
		j++;
	}
	printf("\n");
	
	i=2;
	while(i<=(n-1)){
		
		j=1;
		while(j<=n){
			if((j==1) || (j==n))
			printf("*");
		else
			printf(" ");
		j++;
		}
		printf("\n");
		i++;
	}
j=1;
while(j<=n){
	printf("*");
	j++;
}
printf("\n");
	
	
	
	return 0;
}
