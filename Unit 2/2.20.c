#include <stdio.h>
#define PI 3.14159
int main(){
	
	float r,diameter,circumference,area;
	
	printf("Enter radius:");
	scanf("%f",&r);
	
	printf("The Circles's diameter:%f\n",2*r);
	printf("The Circles's circumference:%f\n",(2*PI*r));
	printf("The Circles's area:%f\n",(PI*(r*r)));
	
	
	return 0;
}
