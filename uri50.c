#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int d;
	scanf("%i" , &d);
	if (d == 61) printf("Brasilia");
	if (d == 71) printf("Salvador");
	if (d == 11) printf("Sao Paulo");
	if (d == 21) printf("Rio de Janeiro");
	if (d == 32) printf("Juiz de Fora");
	if (d == 19) printf("Campinas");
	if (d == 27) printf("Vitoria");
	if (d == 31) printf("Belo Horizonte");
	if ((d != 61)&&(d!=71)&&(d!=11)&&(d!=21)&&(d!=32)&&(d!=19)&&(d!=27)&&(d!=31))
		printf("DDD nao cadastrado");
	printf("\n");
	return 0;
}