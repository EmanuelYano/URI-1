/*
	MST via algoritmo de Kruskal em MATRIZ DE ADJACENCIAS
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

#define TRUE  1
#define FALSE 0

#define MAX_VERTICES 40000
#define MAX_ARESTAS  50000
#define INFINITO     9999

typedef struct { int v1, v2, peso; } TAresta;
TAresta pesos[MAX_ARESTAS];

int vertices[MAX_VERTICES];
int arestas[MAX_VERTICES][MAX_VERTICES];

int comp(const void *, const void *);
void kruskal(int);

int main()
{	int nVert, nArest, v1 , v2 , peso , i, j;

	while (scanf("%d %d", &nVert, &nArest) && !(nVert == 0 && nArest == 0))
	{
		for (i = 0; i < nVert; i++)
			for (j = 0; j < nVert; j++)
				arestas[i][j] = INFINITO;

		for (i = 0; i < nArest; i++)
		{	scanf("%d %d %d", &v1, &v2, &peso);
			arestas[v1][v2] = peso;
			arestas[v2][v1] = peso;
		}

		kruskal(nVert);
	}


	return 0;
}

void kruskal (int qtVertices)
{	int i, j, qtArestas, grupo1, grupo2;
	unsigned long long  custoTotal;

	/* Criando e ordenando o vetor de arestas */
	for (i = qtArestas = 0; i < qtVertices; i++)
		for (j = i; j < qtVertices; j++)
			if (arestas[i][j] != INFINITO)
			{	pesos[qtArestas].v1 = i+1;
				pesos[qtArestas].v2 = j+1;
				pesos[qtArestas].peso = arestas[i][j];
				qtArestas++;
			}

	qsort(pesos, qtArestas, sizeof(TAresta), comp);

	custoTotal = 0;

	for (i = 0; i < qtVertices; i++)
		vertices[i] = i ;

	for (i = 0; i < qtArestas; i++)
	{
		if (vertices[pesos[i].v1] != vertices[pesos[i].v2])
		{	custoTotal = custoTotal + pesos[i].peso;

			if (vertices[pesos[i].v1] < vertices[pesos[i].v2])
			{	grupo1 = vertices[pesos[i].v1];
				grupo2 = vertices[pesos[i].v2];
			}
			else
			{	grupo1 = vertices[pesos[i].v2];
				grupo2 = vertices[pesos[i].v1];
			}

			for (j = 0; j < qtVertices; j++)
				if(vertices[j] == grupo2)
					vertices[j] = grupo1;

		}

	}
	printf("%llu\n", custoTotal);
}

int comp(const void *p1, const void *p2)
{	TAresta *i = (TAresta *)p1, *j = (TAresta *)p2;

	if(i->peso > j->peso)
		return 1;
	else if(i->peso < j->peso)
			return -1;
		else
			return 0;
}
