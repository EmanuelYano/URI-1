#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct x
{
  int tempo , valor;
}Tparque;

Tparque vet[101] ;
int Mat[101][601];
int lixo;

int max(int n1 , int n2)
{
  if(n1 > n2)
    return n1;
  else
    return n2;
}

int knapsack (int brinq , int tempoT)
{
   if(brinq < 0)
   {
     return 0;
   }
   if(vet[brinq].tempo > tempoT)
   {
     return knapsack(brinq-1 , tempoT);
   }
   else if(Mat[brinq][tempoT] != lixo)
   {
     return Mat[brinq][tempoT];
   }
   else
  {
    Mat[brinq][tempoT] = max(knapsack(brinq-1, tempoT) , knapsack(brinq , tempoT - vet[brinq].tempo) + vet[brinq].valor);
    return Mat[brinq][tempoT];
  }
}

int main()
{
  int brinq , j , tempoT , i=0;
  while (scanf("%d %d",&brinq , &tempoT ) && brinq != 0 && tempoT != 0)
  {
     i++;
     printf("Instancia %d\n", i);
     for(j=0;j<brinq;j++)
     {
       scanf("%d %d",&vet[j].tempo,&vet[j].valor);
     }
     memset(Mat,-3,sizeof(Mat));
     lixo = Mat[0][0];
     printf("%d\n\n",knapsack(brinq-1,tempoT));
  }
  return 0;
}
