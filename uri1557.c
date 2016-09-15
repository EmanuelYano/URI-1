#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
#define TRUE 1
  
 
int main()
{
    long int num=1 , min = 0 , lin , col , matriz[101][101] , n , qtd_casas , lin2 , col2 , i ;
	char digits[10];
	
    do
    {
		
		scanf("%d" , &n);
        if(n == 0)
            break;
        
		for(lin = 0; lin < n ; lin++)
		{
        for(col = 0; col < n;col++)
        {
            matriz[lin][col] = pow(2.0,lin+col);
        }
		}
		
		sprintf(digits,"%d", matriz[n-1][n-1]);
        qtd_casas = strlen(digits);
        
		for(lin2 = 0;lin2<n;lin2++)
        {
            for(col2=0;col2<n;col2++)
            {
                if(col2 == n-1)
                    printf("%*.d\n", qtd_casas, matriz[lin2][col2]);
                else
                    printf("%*.d ", qtd_casas, matriz[lin2][col2]);
            }
        }
    printf("\n"); 
    }while(n != 0);
    return 0;
}