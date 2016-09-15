#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int i , n , lin , col;
	float M[12][12] , media , soma =  0;
    struct  str
	{
		char tipo;
	};
	struct str x;
	scanf("%c" , &x.tipo);
	for(lin = 0 ; lin < 12; lin++)
		for(col = 0 ; col < 12 ; col++)
		{
			scanf("%f" , &M[lin][col]);
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
