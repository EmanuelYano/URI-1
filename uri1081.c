/*
	Busca em profundidade (DFS) em matriz de adjacencias
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_VERTICES 21
#define MAX_ARESTAS  21

#define TRUE  1
#define FALSE 0

char visitado[MAX_VERTICES], arestas[MAX_VERTICES][MAX_VERTICES];
int flag , qtd;

void dfs(int v, int nVert)
{
	int j , i;
  qtd += 2;
	visitado[v] = TRUE;
	for(j=0;j<nVert;j++)
		if(arestas[v][j])
		{
			if(!visitado[j])
			{
				for(i=0;i<qtd;i++)
					printf(" ");
				printf("%d-%d pathR(G,%d)\n",v , j , j);
				dfs(j , nVert);
				qtd -= 2;
			}
			else
			{
				for(i=0;i<qtd;i++)
					printf(" ");
			  printf("%d-%d\n", v , j);
			}
			flag++;
		}

}


int main()
{
	int X , Y , nVert , nArest , nCas , i ,caso;
	scanf("%d", &nCas);
	for(caso=1;caso<=nCas;caso++)
	{
		scanf("%d %d", &nVert, &nArest);
		memset(arestas , FALSE , sizeof(arestas));
		for(i=0;i<nArest;i++)
		{
			scanf("%d %d",&X , &Y);
			arestas[X][Y] = TRUE;
		}
		printf("Caso %d:\n", caso);
			memset(visitado , FALSE , sizeof(visitado));
		for(i = 0; i < nVert; i++)
		{
			if(!visitado[i])
			{
				qtd = flag = 0;
				dfs(i , nVert);
				if(flag)
					printf("\n");
			}
		}
	}

	return 0;
}
