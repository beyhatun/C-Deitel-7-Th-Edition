#include <stdio.h>
int main(){
 		
 		int a,b,c;
 		
 		 	printf( "Enter a:" );
  			scanf( "%d",&a );
  			printf( "Enter b:" );
  			scanf( "%d",&b );
  			printf( "Enter c:" );
  			scanf( "%d",&c );
  			
  	

  if ( a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(b*b)+(a*a) ) 
    printf( "Could be a triangle!" );
   else 
    printf( "Not an equilateral triangle." );
  

	return 0;
}
