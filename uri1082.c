/*
	Busca em profundidade (DFS) em matriz de adjacencias
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_VERTICES 1000
#define MAX_ARESTAS  1000

#define TRUE  1
#define FALSE 0

int visitado[MAX_VERTICES], arestas[MAX_VERTICES][MAX_VERTICES];
int qtde;
char resp[27];

void dfs(int v, int qtvisitado)
{	int j;

	visitado[v] = TRUE;
	resp[qtde++] = v+'a';
	for(j = 0; j < qtvisitado; j++)
		if(arestas[v][j] == TRUE)
			if(visitado[j] == FALSE)
				dfs(j, qtvisitado);
}

int comp (const void *P1 , const void *P2)
{
	char *A = (char*)P1 , *B = (char*)P2;
	if(*A > *B)
		return 1;
	else if(*A < *B)
		return -1;
	else
		return 0;
}

int main()
{	int nVert , nArest , nCas , j , i ,caso , conec;
	char X , Y;
	scanf("%d", &nCas);
	for(caso=1;caso<=nCas;caso++)
	{
		scanf("%d %d", &nVert, &nArest);

		memset(arestas , FALSE , sizeof(arestas));

		for(i=0;i<nArest;i++)
		{
			scanf(" %c %c",&X , &Y);
			arestas[X-'a'][Y-'a'] = TRUE;
			arestas[Y-'a'][X-'a'] = TRUE;
		}
		printf("Case #%d:\n", caso);
		memset(visitado , FALSE , sizeof(visitado));
		conec = 0;
		for(i = 0; i < nVert; i++)
		{
			qtde = 0;
			if(!visitado[i])
			{
				memset(resp , '\0' , sizeof(resp));
				dfs(i , nVert);
				qsort(resp , qtde , sizeof(char) , comp);
				for(j=0;j<qtde;j++)
					printf("%c,",resp[j]);
				printf("\n");
				conec++;
			}
		}
		printf("%d connected components\n", conec);
		printf("\n");
	}

	return 0;
}
