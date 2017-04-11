#include <stdio.h> 
#include <math.h>

int main()
{	
	printf("v = (0.91/x)*x - 0.91\n");
	
	for( int x = 1; x < 17; x++){
		float v = (0.91 / x) * x - 0.91;
		printf( "Fuer x = %d ergibt sich \t v = %.40f \n", x, v);
	}
	
	printf("\n v = sqrt(x) * sqrt(x) - x\n");

	for( int x =1; x < 17; x++){
		float v = sqrt(x) * sqrt(x) - x;
		printf( "Fuer x = %d ergibt sich \t v = %.40f \n", x, v);
	}
	
	return 0;
}