#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a , b;
	scanf("%i %i" , &a , &b);
	if(((b % a) == 0)||((a % b) == 0)) printf("Sao Multiplos");
	else printf("Nao sao Multiplos");
	printf("\n");
	return 0;
}