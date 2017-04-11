#include <stdio.h> 
#include <math.h>

int main ()
{
	// I_k+1 = e - (k + 1) I_k
	
	float a = exp(1.0) - 1;
	
	float reka ( float a, int k){
		float b = exp(1.0) - k * a;
		printf("I_%d \t = %f \n", k , b);
		
		if( k == 31){
			return 0;
		}
		else{
			return reka( b, k+1);
		}
	}
	
	reka( a, 1);
	
	
	int i = 63;
	float x = 0;
	
	printf("\n \n \n");
	
	
	float rekb ( float x, int i){
		float y = - (x - exp(1.0)) / (i+1);
		printf("I_%d \t = %f \n", i , y);
		
		if( i == 0){
			return 0;
		}
		else{
			return rekb( y, i-1);
		}
	}
	
	rekb( x, i-1);
	return 0;
}