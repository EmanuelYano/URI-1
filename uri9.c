#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float p1 , p2 , t;
	int c1 , n1 , c2 , n2;
	scanf("%d %d %f %d %d %f",&c1 , &n1 , &p1 , &c2 , &n2 , &p2);
	t = (n1 * p1) + (n2 * p2);
	printf("VALOR A PAGAR: R$ %.2f\n");
	return 0;
}