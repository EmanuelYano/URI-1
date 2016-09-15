#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_VERTICES 10000
#define MAX_ARESTAS  30000

char arestas[MAX_VERTICES][MAX_VERTICES];
int visitado[MAX_VERTICES] , comp;

void dfs(int v , int marca)
{
   int i;
   visitado[v] = marca;
   comp++;
   for(i=1;i<arestas[v][0];i++)
    if(!visitado[arestas[v][i]])
      dfs(i , marca);
}

int main()
{
  int cont , v1 , v2 , i , nCas , nVert , nArest ;
  scanf("%d",&nCas);
  for(cont=1;cont<=nCas;cont++)
  {
    memset(arestas , 0 , sizeof(arestas));
    scanf("%d %d", &nVert , &nArest);
    for(i=0;i<nArest;i++)
    {
       scanf("%d %d",&v1 , &v2);
       arestas[v1-1][++arestas[v1-1][0]] = v2;

    }
    memset(visitado, 0 , sizeof(visitado));

    for(i=0;i<nVert;i++)
    {
      comp = 0;
      //if(!visitado[i])

        //comp++;
        dfs(i , comp);
        printf("%d\n", comp);
    }
    printf("Caso #%d:", cont);
    if(comp == 0)
      printf("a promessa foi cumprida\n");
    else
      printf("ainda falta(m) %d estrada(s)\n",comp);
  }

  return 0;
}
