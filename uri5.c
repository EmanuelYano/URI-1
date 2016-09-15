#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double a , b , m ;
	scanf("%lf %lf" , &a , &b);
	m = ((a * 0.3181818) + (b * 0.681818182))  ;
	printf("MEDIA = %.5f\n" , m);
	return 0;
}