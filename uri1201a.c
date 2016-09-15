#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct regNo
{
  struct regNo *esq;
  long long int   valor;
  struct regNo *dir;
}TNo;

TNo *AchaPai(TNo *r, long long int n);
void ImprimePre(TNo *r);
void ImprimeIn(TNo *r);
void ImprimePos(TNo *r);
int  Pesquisa(TNo *r , long long int n);
void RemoveArv (TNo *r , long long int n);

int j = 0 , qtd=0;

int main()
{
  TNo *raiz = NULL, *aux, *pai;
  int i=0;
  char instr[10];
  long long int n;
  while (scanf("%s",instr) != EOF)
  {
     if(!strcmp(instr,"I"))
     {
        scanf("%lld", &n);
        aux = (TNo *) malloc( sizeof(TNo) );
        aux->valor = n;
        aux->dir = NULL;
        aux->esq = NULL;
        //printf("%c\n" , aux->valor);
        if(i != 0 && Pesquisa(raiz , n) ==  0)
        {
          pai = AchaPai( raiz, n );
          if( pai == NULL )
            raiz = aux;
          else
            if( n <= pai->valor)
              pai->esq = aux;
            else
              pai->dir = aux;
          //printf("Entrou %c\n" , aux->valor);
          qtd++;
        }
        if(i == 0)
        {
          pai = AchaPai( raiz, n );
          if( pai == NULL )
            raiz = aux;
          else
            if( n <= pai->valor )
              pai->esq = aux;
            else
              pai->dir = aux;

          i = 1;
          qtd++;
          //printf("Primeiro %c\n" , aux->valor);
        }
     }
    else if(i != 0 && !strcmp(instr,"P"))
     {
         scanf("%lld", &n);
         if(Pesquisa(raiz , n))
          printf("%lld existe\n",n);
         else
          printf("%lld nao existe\n",n);
         //printf("\n");
     }
     else if(i != 0 && !strcmp(instr,"R"))
     {
       scanf("%lld",&n);
       if(Pesquisa(raiz,n))
       {
         RemoveArv(raiz , n);
       }
     }
     else if(i != 0 && !strcmp(instr,"INFIXA"))
     {
       if(qtd != 0)
       {
        ImprimeIn(raiz);
        printf("\n");
        j = 0;
       }
     }
     else if(i != 0 && !strcmp(instr,"PREFIXA"))
     {
       if(qtd != 0)
       {
         ImprimePre(raiz);
         printf("\n");
         j = 0;
       }
     }
     else if(i != 0 && !strcmp(instr,"POSFIXA"))
     {
       if(qtd != 0)
       {
         ImprimePos(raiz);
         printf("\n");
         j = 0;
       }
     }
  }
  return 0;
}


TNo *AchaPai( TNo *r, long long int n )
{
  //printf("papa\n");
  if( r == NULL )
    return NULL;
  else
    if( n <= r->valor )
    /* n é descendente do lado esquerdo de r */
      if( r->esq == NULL )
        return r;
      else
        return AchaPai( r->esq, n );
  else
    /* n é descendente do lado direito de r */
    if( r->dir == NULL )
      return r;
    else
      return AchaPai( r->dir, n );
}

void ImprimePre(TNo *r)
{
  if( r != NULL )
  {
    if(j == 0)
    {
      printf("%lld", r->valor);
      j = 1;
    }
    else
    {
      printf(" %lld",r->valor);
    }
    ImprimePre(r->esq);
    ImprimePre(r->dir);
  }
  //printf("\n");
}

void ImprimePos(TNo *r)
{
  if( r != NULL )
  {
    ImprimePos(r->esq);
    ImprimePos(r->dir);
    if(j == 0)
    {
      printf("%lld", r->valor);
      j = 1;
    }
    else
    {
      printf(" %lld",r->valor);
    }
  }
  //printf("\n");
}

void ImprimeIn(TNo *r)
{
  if( r != NULL )
  {
    ImprimeIn(r->esq);
    if(j == 0)
    {
      printf("%lld", r->valor);
      j = 1;
    }
    else
    {
      printf(" %lld",r->valor);
    }
    ImprimeIn(r->dir);
  }
  //printf("\n");
}

int Pesquisa (TNo *r , long long int n)
{
    TNo *atual = r;
    if(r == NULL)
        return 0;
    while(atual != NULL)
    {
        if(n == atual->valor)
        {
            return 1;
        }
        if(n > atual->valor)
            atual = atual->dir;
        else
            atual = atual->esq;
    }
    return 0;
}

void RemoveArv (TNo *r , long long int n)
{
   

}
