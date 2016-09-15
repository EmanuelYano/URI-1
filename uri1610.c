#include <bits/stdc++.h>
using namespace std;

vector<int> arestas[10005];
int visitado[10005], flag;

void DFS( int v ) {
	visitado[v] = 1;

	for( int i=0; i<arestas[v].size() && !flag; i++ )
		if( visitado[ arestas[v][i] ] == 0 )
			DFS( arestas[v][i] );
		else if( visitado[ arestas[v][i] ] == 1 )
			flag = true;

	visitado[v] = 2;
}

int main() {
	int nCas, nVert, nArest, a, b;

	scanf("%d", &nCas );
	while(nCas-- )
  {
		scanf("%d %d", &nVert, &nArest );
		for( int i=1; i<=nVert; i++ )
      arestas[i].clear();
		for( int i=0; i<nArest; i++ )
    {
			scanf("%d %d", &a, &b );
			arestas[a].push_back( b );
		}
		flag = false;
		memset( visitado, 0, sizeof visitado );
		for( int i=1; i<=nVert && !flag; i++ )
			if( visitado[i] != 1 )
				DFS( i );

		printf( "%s\n", ( flag ? "SIM" : "NAO" ) );
	}

	return 0;
}
