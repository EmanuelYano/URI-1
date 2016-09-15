#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1


int **matriz , n;

int preenche (int max)
{
	long int num = 1 , min = 0 , lin , col ;
	
	for(lin = min; lin < max ; lin++)
	{
		for(col = min; col < max;col++)
		{
			 matriz[lin][col] = pow(2.0, lin+col);
		}
	}	
}	

int main()
{
	int lin2 , col2 , i ;
	do
	{
		scanf("%d" , &n);
		matriz = malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            matriz[i] = malloc(n*sizeof(int));
			
		preenche(n);
		
		for(lin2=0;lin2<n;lin2++){
			if(lin2!=0){
				printf("\n");
			}
			for(col2=0;col2<n;col2++){
				if(col2==0){
					printf("%3d", matriz[lin2][col2]);
				}
				else{
					printf(" %3d" , matriz[lin2][col2]);

				}
			}
		}
		for(i=0;i<n;i++)
            free(matriz[i]);
        free(matriz);
	printf("\n\n");	
	}while(n != 0);
	return 0;
}