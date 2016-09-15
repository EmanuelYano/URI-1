#include <bits/stdc++.h>
using namespace std;

struct aresta {
	int v;
	double d;

	aresta( int v, double d ) {
		this->v = v;
		this->d = d;
	}
	bool operator<( aresta A ) const { return d > A.d; }
};

vector<aresta> G[505];
priority_queue<aresta> fila;
bool visitado[505];

int main() {
	int j , i , nCas, nVert, x[505], y[505];
	double D;

	scanf("%d", &nCas );
	while( nCas-- )
  {
		scanf("%d", &nVert);
		for(i=0; i<nVert; i++)
    {
			scanf("%d %d", &x[i], &y[i]);
			G[i].clear();
    }

		for(i=0; i<nVert; i++ )
			for(j=i+1; j<nVert; j++ )
      {
				D = sqrt( pow( x[i]-x[j], 2 ) + pow( y[i]-y[j], 2 ) );
				G[i].push_back( aresta( j, D ) );
				G[j].push_back( aresta( i, D ) );
			}

		memset( visitado, false, sizeof visitado );
		D = 0;
		fila.push( aresta( 0, 0.0 ) );
		while( !fila.empty() )
    {
			aresta A = fila.top(); 
      fila.pop();

			if( !visitado[ A.v ] )
      {
	        	visitado[ A.v ] = true;
	        	D += A.d;

				for(i=0; i<G[A.v].size(); i++ )
        {
					aresta B = G[A.v][i];
					if( !visitado[ B.v ] )
						fila.push( B );
				}
			}
		}
		printf( "%.2lf\n", D/100.0 );
	}

	return 0;
}
