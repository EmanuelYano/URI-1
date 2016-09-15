#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define tot 100

int main()
{
	int ncasos , nalunos , i , j , notas[1000];
	int soma , i1=0 , j1;
	double media , pcte , somapcte;
	
	scanf("%d" , &ncasos);
	
	for(i1=0;i1<ncasos;i1++)
	{
		pcte = soma = somapcte = 0;
		scanf("%d" , &nalunos);
		for(j1=0;j1<nalunos;j1++)
		{
			for(i=0;i<nalunos;i++)
			{
				scanf("%d" , &notas[i]);
				soma += notas[i];
			}
			media = soma / nalunos;
			for(j=0;j<nalunos;j++)
				if(notas[j] > media)
					somapcte++;
			pcte = (tot*somapcte)/nalunos;
		}	
			printf("%.3f%%\n" , pcte);
	}
	return 0;
}
	