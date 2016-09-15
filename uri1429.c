#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int n;

int fatorial(num)
{
	int i1 , f=1 ;
    for(i1 = 1 ; i1 <= num ; i1 = i1 + 1)
    {
        f = f * i1;
    }
	return f;
}

int main()
{
	long long c , qtd , i , numeroI[5] , j, soma;
	char numero[5] , nummat[5][5];
	do
	{
		soma = 0;
		scanf("%d" , &n);
		sprintf(numero , "%d" , n);
		qtd = strlen(numero);
		if(n == 0)
			break;
		if(qtd > 1)
		{
			for(i=qtd , j=0 ; i>0, j<5 ;i--,j++)
			{
			nummat[j][0] = numero[j];
			numeroI[j] = atoi(nummat[j]);
			soma += numeroI[j] * fatorial(i);
			}
		}
		if(qtd == 1 && n != 0)
			soma = n;
		printf("%d\n" , soma);

	}while(n != 0);
	return 0;
}
	