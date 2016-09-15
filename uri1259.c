#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#define TRUE 1

int j , g , vetor[100001] , i , par[100001] , impar[100001] ;
int n;


int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	scanf("%d" , &n);
	// Separação impares e pares
	for(i=0;i < n;i++)
	{
		scanf("%d" , &vetor[i]);
		if(vetor[i] % 2 == 0)
		{	
			par[i] = vetor[i];
		}
		else
		{
			impar[i] = vetor[i];
			par[i]   = -1;
		}
	}

	qsort(par,n,sizeof(int),cmpfunc);
	qsort(impar,n,sizeof(int),cmpfunc);
	
	
	for(j=0;j<n;j++)
	{
		if(par[j] != -1)
		printf("%d\n" , par[j]);
	}
	for(g=n-1;g>0;g--)
	{
		if(impar[g]!= 0)
		printf("%d\n" , impar[g]);
	}

	return 0;
}
	