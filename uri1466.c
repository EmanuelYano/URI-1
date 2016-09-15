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
void Imprime(TNo *r);

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
    Imprime(raiz);
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

void Imprime (TNo *r)
{
  TNo *fila[501] , *aux;
  int flag = 0 , ini=0 , final=0;
  fila[final] = r;
  final++;
  while(ini != final)
  {
    aux = fila[ini++];
    if(aux->esq != NULL)
    {
      fila[final++] = aux->esq;
    }
    if(aux->dir != NULL)
    {
      fila[final++] = aux->dir;
    }
    if(flag)
      printf(" %d",aux->valor);
    else
    {
      printf("%d",aux->valor);
      flag++;
    }
  }
  printf("\n");
}
