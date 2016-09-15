#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int i , n , lin , col;
	char T;
	float M[12][12] , media , soma =  0;
    struct  str
	{
		int linha;
		char tipo;
	};
	struct str x;
	scanf("%d %c" , &x.linha , &x.tipo);
	for(lin = 0 ; lin < 12; lin++)
		for(col = 0 ; col < 12 ; col++)
		{
			scanf("%f" , &M[lin][col]);
		}
	for(i = 0 ; i < 12 ; i++)
	{
		soma += M[x.linha][i];
	}		
	if(x.tipo == 'S' )
		printf("%.1f" , soma);
	if(x.tipo == 'M' )
	{
		media = soma / 12;
		printf("%.1f" , media);
	}
	printf("\n");
    return 0;
}
