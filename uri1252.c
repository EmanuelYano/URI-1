#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct sort
{
	int num , mod;
}sort;

int comp (const void *P1 , const void *P2)
{
	sort *a = (sort*)P1 , *b = (sort*)P2;
	if(a->mod > b->mod)
		return 1;
	else if(a->mod < b->mod)
		return -1;
	else
	{
		if((a->num % 2 == 1 && b->num % 2 == 1)||(a->num % 2 == -1 && b->num % 2 == 1)||(a->num % 2 == 1 && b->num % 2 == -1)||(a->num % 2 == -1 && b->num % 2 == -1))
		{
			if(a->num > b->num)
				return -1;
			else if(a->num < b->num)
				return 1;
			else
				return 0;
		}
		else if(a->num % 2 == 0 && b->num % 2 == 0)
		{
			if(a->num > b->num)
				return 1;
			else if(a->num < b->num)
				return -1;
			else
				return 0;
		}	
		else
		{
			if(a->num % 2 == 1 || a->num % 2 == -1)
				return -1;
			else 
				return 1;
		}
	}
}

int main()
{
	int  tVet , n  , i;
	sort *vet;
	while(1)
	{
		scanf("%d %d" , &tVet , &n);
		if(tVet == 0 && n == 0)
			break;
		vet = calloc(tVet , sizeof(sort));
		for(i=0;i<tVet;i++)
		{
			scanf("%d" , &vet[i].num);
			vet[i].mod = vet[i].num % n;
		}
		qsort(vet , tVet , sizeof(sort) , comp);
		printf("%d %d\n" , tVet , n);
		for(i=0;i<tVet;i++)
		{
			printf("%d\n" , vet[i].num);
		}
	}
	printf("0 0\n" , tVet , n);
	return 0;
}