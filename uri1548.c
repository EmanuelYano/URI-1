#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int comp (const void *P1 , const void *P2)
{
	int *a =(int*) P1 , *b = (int*) P2;
	if(*a < *b)
		return 1;
	else if(*a > *b)
		return 0;
	else
		return 0;
}

int main ()
{
	int *vet1 , *vet2 , i , cont , n , nCasos;
	scanf("%d" , &nCasos);
	while(nCasos--)
	{
		cont = 0;
		scanf("%d" , &n);
		vet1 = calloc(n,sizeof(int));
		vet2 = calloc(n,sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d" , &vet1[i]);
			vet2[i] = vet1[i];
		}
		
		qsort(vet1 , n , sizeof(int) , comp);
		for(i=0;i<n;i++)
		{
			if(vet2[i] == vet1[i]) cont++;
		}
		printf("%d\n" , cont);
	}
	return 0;
}