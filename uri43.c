#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float a , b , c , r;
	scanf("%f %f %f" , &a , &b , &c);
	if ((a < b+c) && (b < a+c) && (c < a + b)){
		r = a + b + c;
		printf ("Perimetro = %.1f" , r);
	}
	else{
		r = (((a + b) * c )/ 2);
		printf("Area = %.1f" , r);
	}
	printf("\n");
	return 0;
}