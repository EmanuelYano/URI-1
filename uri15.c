#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float x1 , x2 , y1 , y2 , d , r1 , r2 , r3;
	scanf("%f %f\n%f %f" , &x1 , &y1 , &x2 , &y2);
	r1 = (x2 - x1)*(x2 - x1);
	r2 = (y2 - y1)*(y2 - y1);
	r3 = (r1 + r2);
	d = sqrt(r3);
 	printf("%.4f\n" , d );
return 0;}