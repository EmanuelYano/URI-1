#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n , qtd , nCas , i;
   double soma , j;
   map<int,double>Precos;
   j = 0.50;
   for(i=1000;i<2000;i++)
   {
      Precos.insert(std::pair<int,double>(i,j));
      j += 1;
   }

   scanf("%d",&nCas);

   while(nCas--)
   {
      scanf("%d %d",&n,&qtd);
      soma += Precos[n]*qtd;
   }
   printf("%.2f\n",soma);
   return 0;
}
