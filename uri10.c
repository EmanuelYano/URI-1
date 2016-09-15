#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	char e;
	float p1 , p2 , t;
	int c1 , n1 , c2 , n2;
	scanf("%i %i %f",&c1,&n1,&p1);
	scanf("%i %i %f",&c2,&n2,&p2);
	t = (n1 * p1) + (n2 * p2);
	printf("VALOR A PAGAR: R$ %.2f\n" , t);
	return 0;
}