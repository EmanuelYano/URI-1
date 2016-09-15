#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct no
{
  struct no *prox;
  int num;
}Ttrilhos;

typedef struct x
{
  Ttrilhos *inicio;
  Ttrilhos *fim;
}Desc;

void pop(Desc *descritor);
void push(Desc *descritor , int simb);

int main()
{
  Ttrilhos *aux;
  Desc *saida , *estacao , *entrada;
  estacao = (Desc*)malloc(sizeof(Desc));
  saida = (Desc*)malloc(sizeof(Desc));
  entrada = (Desc*)malloc(sizeof(Desc));

  int nTrens , i , *vet , flag;
  while (scanf("%d",&nTrens ) && nTrens != 0)
  {
    vet = (int*)calloc(nTrens , sizeof(int));
    while (1)
    {
       flag = 0;
       for(i=1;i<=nTrens;i++)
       {
          scanf("%d", &vet[i]);
          if(vet[i] == 0)
          {
            flag = 2;
            break;
          }
          push(saida , vet[i]);
       }
       for(i=nTrens;i>0;i--)
          push(entrada , i);
       while(1)
       {
         //("%d\n" , flag);
         if(flag == 2)
            break;
          if(saida->inicio != NULL && estacao->inicio != NULL && estacao->inicio->num == saida->inicio->num)
          {
             pop(estacao);
             pop(saida);
          }
          else if(estacao->inicio == NULL)
          {
            if(entrada->inicio != NULL && saida->inicio != NULL && entrada->inicio->num == saida->inicio->num)
            {
              pop(entrada);
              pop(saida);
            }
            else if(entrada->inicio != NULL)
            {
              push(estacao , entrada->inicio->num);
              pop(entrada);
            }
          }
          if(saida->inicio != NULL && estacao->inicio != NULL && entrada->inicio == NULL && estacao->inicio->num != saida->inicio->num)
          {
            flag = 1;
            break;
          }
          if(saida->inicio == NULL)
            break;
            

       }
       if(flag == 1)
        printf("No\n");
       else
        printf("Yes\n");


        while (estacao->inicio != NULL) {
          aux = estacao->inicio;
          estacao->inicio = aux->prox;
          free(aux);
        }
        while (entrada->inicio != NULL) {
          aux = entrada->inicio;
          entrada->inicio = aux->prox;
          free(aux);
        }
        while (saida->inicio != NULL) {
          aux = saida->inicio;
          saida->inicio = aux->prox;
          free(aux);
        }
    }
  }
  return 0;
}

void push (Desc *descritor , int simb)
{
  Ttrilhos *aux;
  aux = (Ttrilhos*)malloc(sizeof(Ttrilhos));
  aux->num = simb;
  aux->prox = descritor->inicio;
  descritor->inicio = aux;
}

void pop (Desc *descritor)
{
  Ttrilhos *aux;
  aux = descritor->inicio;
  descritor->inicio = aux->prox;
  free(aux);
}
