#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct x
{
  int valor , tam;
}Tcano;

Tcano vet[2001];
int lixo , Mat[1001][2001];

int comp (const void *P1 , const void *P2)
{
  Tcano *a = (Tcano*)P1 , *b = (Tcano*)P2;
  if(a->tam > b->tam)
    return -1;
  else if(a->tam < b->tam)
    return 1;
  else
    return 0;
}

int max(int n1 , int n2)
{
  if(n1 > n2)
    return n1;
  else
    return n2;
}

int knapsack (int nCli , int Tam)
{
   if(nCli < 0)
   {
     return 0;
   }
   if(vet[nCli].tam > Tam)
   {
     return knapsack(nCli-1 , Tam);
   }
   else if(Mat[nCli][Tam] != lixo)
   {
     return Mat[nCli][Tam];
   }
   else
  {
    Mat[nCli][Tam] = max(knapsack(nCli-1, Tam) , knapsack(nCli , Tam - vet[nCli].tam) + vet[nCli].valor);
    return Mat[nCli][Tam];
  }
}

int main()
{
   int  i , nCli , tamOri;
   scanf("%d %d", &nCli , &tamOri);
   for(i=0;i<nCli;i++)
   {
     scanf("%d %d", &vet[i].tam , &vet[i].valor);
   }
   qsort(vet , nCli , sizeof(Tcano) , comp);
   memset(Mat , -1 , sizeof(Mat));
   lixo = Mat[0][0];
   printf("%d\n",knapsack(nCli-1,tamOri));
}
