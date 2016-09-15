#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct lista
{
	char num[205];
}


int comp (const void *P1 , const void *P2)
{
	struct lista *A = (struct lista *)P1 , *B = (struct lista *)P2;
	return strcmp(A->num , B->num);
}


int main()
{
	int cont , aux , n , i , j;
	struct lista aux1;
	while(scanf("%d" , &n) != EOF)
	{
		struct lista vet[n];
		cont = 0;
		for(i=0;i<n;i++)
		{
			scanf("%s" , &vet[i]);
		}
		qsort(vet, n , sizeof(char) , comp);
		aux1 = vet[0];
        for(i = 1; i < n; i++)
		{
            for(j = 0; j < strlen(vet[i].num); j++)
			{
                  if(aux1.num[0] != vet[i].num[0])
				  {
                        aux1 = vet[i];
                        break;
                  }
				  else if(aux1.num[j] == vet[i].num[j])
					  cont++;
                  else
				  {
						aux1 = vet[i];
						break;
                  }
            }
        }
		aux = strlen(vet[0]);
		for(i=1;i<n;i++)
		{
			for(j=0;j<aux;j++)
			{
				if(vet[i][j] != vet[i-1][j])
					break; 
				else 
					cont++;
			}
		}
		printf("%d\n" , cont);
	}
	return 0;
}