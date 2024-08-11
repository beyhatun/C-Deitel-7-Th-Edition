#include <stdio.h>
int main(){
 		
 		float x,y,z;
 		
 		 	printf( "Enter x:" );
  			scanf( "%f", &x );
  			printf( "Enter y:" );
  			scanf( "%f", &y );
  			printf( "Enter z:" );
  			scanf( "%f", &z );

  if ( x == y && x == z && z == y ) {
    printf( "Could be a triangle!\n" );
  } else {
    printf( "Not an equilateral triangle.\n" );
  }

	return 0;
}
