#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct x
{
  int tempo , valor;
  int ind;
}Tparque;

int comp (const void *P1 , const void *P2)
{
  Tparque *a = (Tparque*)P1 , *b = (Tparque*)P2;
  if(a->ind > b->ind)
    return 1;
  else if(a->ind < b->ind)
    return -1;
  else
    return 0;
}

int main()
{
  Tparque vet[101] ;
  int aux , brinq , j , tempoT , i=0 , pont , tempo;
  while (scanf("%d %d",&brinq , &tempoT ) && brinq != 0)
  {
     i++;
     printf("Instancia %d:\n", i);
     for(j=0;j<brinq;j++)
     {
       scanf("%d %d",&vet[j].tempo,&vet[j].valor);
       vet[j].ind = vet[j].tempo / vet[j].valor;
     }
     qsort(vet,brinq,sizeof(Tparque),comp);
     j=0;
     pont = tempo = 0;
     while(j < brinq)
     {
        aux = tempo + vet[j].tempo;
        if(aux <= tempoT)
        {
          pont += vet[j].valor;
          tempo = aux;
        }
        else
          j++;
     }

     printf("%d\n",pont);
  }
  return 0;
}
