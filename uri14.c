#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double x1 , x2 , y1 , y2 , d;
	scanf("%lf %lf\n%lf %lf" , &x1 , &x2 , &y1 , &y2);
	d = pow(((x2 - x1)*(x2 - x1))+((y2 - y1) * (y2 - y1)) , 1/2);
 	printf("%f\n" , d);
return 0;}