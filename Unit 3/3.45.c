#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("90 derecenin karsisindaki kenari girin:");
	scanf("%d",&a);
	printf("ikinci kenari girin:");
	scanf("%d",&b);
	printf("ucuncu kenari girin:");
	scanf("%d",&c);
	
	if((a*a)==(b*b)+(c*c))
		printf("\nDik ucgen olusturulur");
	else
		printf("Dik ucgen olusturulmaz");
	
	return 0;
}
