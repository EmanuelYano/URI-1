#include <bits/stdc++.h>
using namespace std;

char arestas[100][100];
int visitado[10005], qtde , nVert;

void DFS( int v ) {
	visitado[v] = 1;
	for(int i=0; i<nVert; i++)
		if(arestas[v][i])
			if(!visitado[i])
			{
				qtde += 2;
				DFS(i);
			}
}

int main() {
	int nCas, nArest, a, b , n;
	scanf("%d", &nCas );
	while(nCas-- )
  {
		scanf("%d", &n);
		scanf("%d %d", &nVert, &nArest );
		for(int i =  0; i < nVert ; i++)
			for(int j = 0 ; j < nVert ; j++)
				 arestas[i][j] = 0;
		for(int i=0; i<nArest; i++ )
    {
			scanf("%d %d", &a, &b );
			arestas[a][b] = 1;
			arestas[b][a] = 1;
		}
		qtde = 0;
		for(int i =  0; i < nVert ; i++)
			visitado[i] = 0;
		DFS(n);
		printf("%d\n" , qtde);
	}

	return 0;
}
