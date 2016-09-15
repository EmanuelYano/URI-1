#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct no
{
    int num;
    struct no *prox;
};
typedef struct no Tdeque;
typedef struct x
{
    Tdeque *topo , *fim;
    int qtd;
}Ddeque;

void pop(Ddeque *descritor)
{
    Tdeque *aux;
    aux = descritor->topo;
    descritor->topo = descritor->topo->prox;
    descritor->qtd=descritor->qtd - 1;
    //printf("carta = %d\n", descritor->qtd);
    free(aux);
}


int main()
{
    Ddeque descritor;
    Tdeque *aux , *ant;
    int i , n;
    while(scanf("%d" , &n) && n != 0)
    {
        descritor.fim = NULL;
        descritor.topo = NULL;
        descritor.qtd = 0;
        for(i=1;i<=n;i++)
        {
            aux = (Tdeque *)malloc(sizeof(Tdeque));
            aux->num = i;
            aux->prox = NULL;

            if(descritor.topo == NULL)
                    descritor.topo = aux;
            else
                    ant->prox = aux;
            ant = aux;
            descritor.qtd=descritor.qtd+1;
        }
        descritor.fim = aux;

        printf("Discarded cards: ");
        while(descritor.qtd > 1)
        {
            printf("%d" , descritor.topo->num);
            aux = descritor.topo->prox;
            free(descritor.topo);

            descritor.qtd=descritor.qtd-1;

            descritor.topo = aux;
            if(descritor.qtd == 1)
                break;

            descritor.fim->prox = descritor.topo;
            descritor.fim = descritor.topo;

            descritor.topo = descritor.topo->prox;

            if(descritor.qtd > 1)
                printf(", ");
        }
        printf("\nRemaining card: %d\n" , descritor.topo->num);
    }
    return 0;
}
