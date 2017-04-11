#include <stdio.h> 
#include <math.h>

int main()
{
	// S_n = S_n-1 +1/n
	
	float a = 0;
	int n = 1;
	
	float funktion ( float a, int n){
		printf("%f",a);
		float b = a + 1./n;
		
		printf("Dies ist Durchlauf %d . b = %.35f \n", n , b);
		
		if( b == a){
			return 0;
		}
		
		return funktion( b, n+1);
	}
	
	funktion( a, n);
	
	return 0;
}