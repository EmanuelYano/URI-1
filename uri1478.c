#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1


int matriz[101][101] , n;

int preenche (int max)
{
	long int num = 1 , min = 0 , lin , col ;
	do{
	for(lin = min; lin < max ; lin++)
	{
		for(col = min; col < max;col++)
		{
			if(col == min & lin == col)
			{
				num = 1;
			}
			if(lin == min || col == min)
			{
				matriz[lin][col] = num;
				matriz[col][lin] = num;
				if(col == max-1)
					min++;
				num++;
			}
			
		}
	}
	min++;
	if(min > max-1)
			break;
	
	}while(TRUE);
	
	
}	

int main()
{
	int lin2 , col2 , i ;
	do
	{
		scanf("%d" , &n);
		if(n == 0)
			break;
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
	printf("\n\n");	
	}while(n != 0);
	return 0;
}