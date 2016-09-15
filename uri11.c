#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double pi = 3.14159 , v;
	int r;
	scanf("%i" , &r);
	printf("VOLUME = %.3lf\n" , (4/3.0*pi*r*r*r));
	return 0;
}