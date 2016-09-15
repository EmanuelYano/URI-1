#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double a , b , c , m ;
	scanf("%lf %lf %lf" , &a , &b , &c);
	m = ((a * 0.2) + (b * 0.3) + (c * 0.5));
	printf("MEDIA = %.1f\n" , m);
	return 0;
}