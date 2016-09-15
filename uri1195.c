#include <stdio.h>
#include <stdlib.h>

struct regNo
{
  struct regNo *esq;
  int valor;
  struct regNo *dir;
};
typedef struct regNo TNo;

TNo *AchaPai( TNo *r, int n );
void ImprimePre(TNo *r);
void ImprimeIn(TNo *r);
void ImprimePos(TNo *r);

int main()
{
  TNo *raiz = NULL, *aux, *pai;
  int numero , nArv , nCas ,i , j;
  scanf("%d", &nCas);
  for(j=1;j<=nCas;j++)
  {
    printf("Case %d:\n",j);
    scanf("%d", &nArv);
    for(i=0;i<nArv;i++)
    {
      scanf("%d", &numero);
      aux = (TNo *) malloc( sizeof(TNo) );
      aux->valor = numero;
      aux->dir = NULL;
      aux->esq = NULL;
      /* Fazendo o encadeamento do novo noh */
      pai = AchaPai( raiz, numero );
      if( pai == NULL )
        raiz = aux;
      else
        if( numero <= pai->valor )
          pai->esq = aux;
        else
          pai->dir = aux;
    }
    printf("Pre.:");
    ImprimePre(raiz);
    printf("\n");
    printf("In..:");
    ImprimeIn(raiz);
    printf("\n");
    printf("Post:");
    ImprimePos(raiz);
    printf("\n");
    raiz = NULL;
    printf("\n");
  }
    return 0;
}

TNo *AchaPai( TNo *r, int n )
{
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
    //printf("<");
    printf(" %d", r->valor);
    ImprimePre(r->esq);
    ImprimePre(r->dir);
    //printf(">");
  }
}

void ImprimePos(TNo *r)
{
  if( r != NULL )
  {
    ImprimePos(r->esq);
    ImprimePos(r->dir);
    printf(" %d", r->valor);
  }
}

void ImprimeIn(TNo *r)
{
  if( r != NULL )
  {
    ImprimeIn(r->esq);
    printf(" %d", r->valor);
    ImprimeIn(r->dir);
  }
}
