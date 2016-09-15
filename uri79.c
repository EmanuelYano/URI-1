#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i ,n ;
	float m , a , b , c;
	scanf("%d" , &n);
	for (i = 0 ; i < n ; i++)
	{
		scanf("%f %f %f" , &a ,&b , &c);
		m = (a * 0.2) + (b * 0.3) + (c * 0.5);
		printf("%.1f\n" , m);
	}
	return 0;
	}