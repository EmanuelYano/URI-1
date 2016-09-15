#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
#define TRUE 1
 
 
int matriz[101][101] , n , meio;
 
int preenche (int max)
{
    long int num = 1 , min = 0 , lin , col ;
    
	meio = n/2 ;
    for(lin = min; lin < max ; lin++)
    {
        for(col = min; col < max;col++)
        {
           if(lin == meio && col == meio)
			   matriz[lin][col] = 4;
		   if((lin==0 && col==0) || (lin==(n-1) && col==(n-1)))
			   matriz[lin][col] = 2;
        }
    }
   
     
     
}   
 
int main()
{
    int lin2 , col2 , i ;
	
    while((scanf("%d" , &n))!= EOF)
    {
        preenche(n);
		
		if(matriz[0][0] == 2)
			printf("%d\n" , matriz[0][0]);
		else
		{
			for(lin2=0;lin2<n;lin2++)
			{
				if(lin2!=0){
                printf("\n");
				}
				for(col2=0;col2<n;col2++)
				{
                if(col2==0){
					printf("%d", matriz[lin2][col2]);
                }
                else{
					
					if(lin2==n-1 && col2==n-1)
						printf("%d\n" , matriz[lin2][col2]);
					else
						printf("%d" , matriz[lin2][col2]);
                }
				}
			} 
		}
		for(lin2 = 0; lin2 < n ; lin2++)
		{
			for(col2 = 0; col2 < n;col2++)
			{
				if(lin2 == meio && col2 == meio)
					matriz[lin2][col2] = 0;
			}
		}
		printf("\n");
    }
	
    return 0;
}