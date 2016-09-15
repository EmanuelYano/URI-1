#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	int dist , i=0 , soma=0;
	double media;
	char nome[30];
	while(gets(nome) != NULL && scanf("%d",&dist) != EOF)
	{
		soma += dist;
		i++;
	}
	media = soma / i;
	printf("%.1f\n" , media);
	return 0;
}
	