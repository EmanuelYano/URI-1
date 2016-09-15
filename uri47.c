#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	long int hi , hf , mi , mf , d , m;
	scanf("%d %d %d %d" , &hi , &mi , &hf , &mf);
	if ((hf > hi) && (mf >= mi)){
	d = (hf - hi);
	m = (mf - mi);
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" , d , m);
	}
	if ((hf > hi) && (mf < mi)){
		d = (hf - hi) - 1;
		m = ((60 + mf) - mi);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" , d , m);
	}
	if ((hf < hi) && (mf >= mi)){
		d = ((24 + hf) - hi);
		m = (mf - mi);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" , d , m);
	}
	if ((hf < hi) && (mf < mi)){
		d = ((23 + hf) - hi);
		m = ((60 + mf) - mi);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" , d , m);
	}
	if (hi == hf ){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");		
	}
	printf("\n");
	return 0;
}