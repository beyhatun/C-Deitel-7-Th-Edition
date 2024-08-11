#include <stdio.h>
int main(){
	
	float gallons,miles,overall,totalgallons,totalmiles;
	totalgallons=0;
	totalmiles=0;
	
	printf("Enter the gallons used (-1 to end):");
	scanf("%f",&gallons);	
						
	while(gallons!=-1){
	printf("Enter the miles driven:");
	scanf("%f",&miles);
	printf("The miles/gallon for this tank was :%f\n",miles/gallons);

	totalgallons+=gallons;
	totalmiles+=miles;
	
	printf("Enter the gallons used (-1 to end):");
	scanf("%f",&gallons);
		
	}
	printf("The overall average miles/gallon was :%f",totalmiles/totalgallons);
	
	return 0;
}
 
