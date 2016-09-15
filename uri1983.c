#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

typedef struct 
{
	int numAl;
	float notaAl;
}notas;

int comp (const void *P1 , const void *P2);

int main ()
{
	notas *vet;
	int i , nAlunos;
	scanf("%d" , &nAlunos);
	vet = calloc(nAlunos , sizeof(notas));
	for(i=0;i<nAlunos;i++)
		scanf("%d %f" , &vet[i].numAl , &vet[i].notaAl);
	qsort(vet , nAlunos , sizeof(notas) , comp);
	if(vet[0].notaAl >= 8) printf("%d" , vet[0].numAl);
	else printf("Minimum note not reached");
	printf("\n");
	return 0;
}

int comp (const void *P1 , const void *P2)
{
	notas *A = (notas *)P1 , *B = (notas *)P2;
	if(A->notaAl > B->notaAl) return -1;
	else if(A->notaAl < B->notaAl) return 1;
	else return 0;
}