#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float x , y;
	int n ,c;
	scanf("%d" , &n);
	for (c = 0; c <= (n-1) ; c++)
	{
		scanf("%f %f",&x , &y);
		if (y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n" , x/y);
	}
	
	return 0;
}