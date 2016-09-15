#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a , b , c , d;
	scanf("%d %d %d %d" , &a , &b , &c , &d);
	if ((b > c) && (d > a) && ((c+d) > (a+b)) && (c > 0) && (d > 0) && ((a % 2) == 0))
		printf("Valores aceitos");
	else 
		printf("Valores nao aceitos");
	printf("\n");
	return 0;
}