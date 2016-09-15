#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long int hi , hf , d;
	scanf("%d %d" , &hi , &hf);
	if (hf > hi){
	d = hf - hi;
	printf("O JOGO DUROU %d HORA(S)" , d);
	}
	if (hi > hf){
		d = (24 + hf) - hi;
		printf("O JOGO DUROU %d HORA(S)" , d);
	}
	if (hi == hf ){
		printf("O JOGO DUROU 24 HORA(S)");
	}
	printf("\n");
	return 0;
}