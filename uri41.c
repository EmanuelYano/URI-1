#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float x , y;
	scanf("%f %f" , &x , &y);
	if (x == 0.0 && y == 0.0) printf("Origem");
	if (x == 0.0 && y != 0.0) printf("Eixo Y");
	if (x != 0.0 && y == 0.0) printf("Eixo X");
	if (x > 0.0 && y > 0.0) printf("Q1");
	if (x < 0.0 && y > 0.0) printf("Q2");
	if (x < 0.0 && y < 0.0) printf("Q3");
	if (x > 0.0 && y < 0.0) printf("Q4");
	printf("\n");
	return 0;
}