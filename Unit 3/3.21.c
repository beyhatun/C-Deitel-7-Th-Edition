#include <stdio.h>
int main(){
	
	int hoursWorked;
	float hourlyRate,salary;
	
	printf("Enter of hours worked (-1 to end): ");
	scanf("%d",&hoursWorked);
	
	while(hoursWorked!=-1){
		
	printf("Enter hourly rate of the worker ($00.00): ");
	scanf("%f",&hourlyRate);
		if(hoursWorked>40)	
	salary=(hoursWorked*hourlyRate)+(hoursWorked-40)*(hourlyRate/2);
		else
	salary=hoursWorked*hourlyRate;
	
	printf("Salary is: %.2f$\n",salary);
	
	printf("Enter of hours worked (-1 to end): ");
	scanf("%d",&hoursWorked);
	
	}
	return 0;
}
