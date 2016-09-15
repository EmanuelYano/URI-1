#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 
int main()
{
    long int matriz[101][101] , n , lin2 , col2 , i , meio , num = 1 , min = 0 , lin , col;
	
    while((scanf("%ld" , &n))!= EOF)
    {
		meio = n/2;
		for(lin = 0; lin < n ; lin++)
		{
			for(col = 0; col < n;col++)
			{
				if(lin == meio && col == meio)
					matriz[lin][col] = 4;
			}
		}
		meio = 0;
		if(matriz[0][0] == 2)
			printf("%d\n" , matriz[0][0]);
		else
		{
			for(lin2=0;lin2<n;lin2++)
			{
				if(lin2!=0)
				{
					printf("\n");
				}
				for(col2=0;col2<n;col2++)
				{
					if(col2==0)
					{
						printf("%d", matriz[lin2][col2]);
					}
					else
					{
					
					if(lin2==n-1 && col2==n-1)
						printf("%d\n" , matriz[lin2][col2]);
					else
						printf("%d" , matriz[lin2][col2]);
					}
				}
			} 
		}
		
		printf("\n");
    }
	
    return 0;
}