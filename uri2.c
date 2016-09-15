#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double  A , r , pi = 3.14159;
	scanf("%lf" , &r);
	A = (r*r) * pi;
	printf("A=%.4f\n" , A);
	return 0;
}