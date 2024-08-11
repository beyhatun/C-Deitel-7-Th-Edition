#include <stdio.h>
int main(){
	
	float salary,sales;
	
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f",&sales);
	
	while(sales!=-1){
		
	salary=(sales*0.09)+200;
	printf("Salary:%.2f$\n",salary);
			
	printf("Enter sales in dollars (-1 to end):");
	scanf("%f",&sales);
	}
	
	return 0;
}
