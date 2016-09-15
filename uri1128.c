/*
	Busca em profundidade (DFS) em matriz de adjacencias
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_VERTICES 2001
#define MAX_ARESTAS  2001

#define TRUE  1
#define FALSE 0

char arestas[MAX_VERTICES][MAX_VERTICES];
int visitado[MAX_VERTICES];

void dfs(int v, int nVert)
{
	int j;
	visitado[v] = TRUE;
	for(j=0;j<nVert;j++)
		if(arestas[v][j])
		{
			if(!visitado[j])
			{
				dfs(j , nVert);
			}
		}
}


int main()
{
	int flag , p , X , Y , nVert , nArest , i , j;
	while(scanf("%d %d", &nVert, &nArest) && nVert != 0 && nArest != 0)
	{
		memset(arestas , FALSE , sizeof(arestas));
		for(i=0;i<nArest;i++)
		{
			scanf("%d %d %d",&X , &Y , &p);
			arestas[X-1][Y-1] = TRUE;
			if(p == 2)
				arestas[Y-1][X-1] = TRUE;
		}

		flag = 0;
		for(i = 0; i < nVert; i++)
		{
			memset(visitado , FALSE , sizeof(visitado));
			dfs(i , nVert);
			for(j=0;j<nVert;j++)
				if(!visitado[j])
				{
					flag = 1;
					break;
				}

		}
		printf("%s\n", flag ? "0" : "1");
	}

	return 0;
}
