#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double a , b , c , d , r1 , r2;
	scanf("%lf %lf %lf" , &a , &b , &c);
	d = (b*b) - (4 * a * c);
	r1 = (-b + sqrt(d)) / (2*a);
	r2 = (-b - sqrt(d)) / (2*a);
	if ((d < 0) || (2 * a) == 0)
		printf("Impossivel calcular");
	else 
		printf("R1 = %.5f\nR2 = %.5f" , r1 , r2);
	printf("\n");
	return 0;
}