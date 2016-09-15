#include <bits/stdc++.h>
using namespace std;

int main()
{
  int nPag , nVal , nTroc;
  int notas[6] = {2,5,10,20,50,100};
  while(scanf("%d %d",&nVal , &nPag) && nVal+nPag != 0)
  {
     int flag = 0;
     nTroc = nPag - nVal;
     for(int i = 0 ; i < 6 ; i++)
     {
        for(int j = 0; j < 6 ; j++)
        {
           if(notas[i] != notas[j])
           {
              if(nTroc == notas[i] + notas[j])
              {
                 flag = 1;
                 break;
              }
           }
        }
        if(flag)
          break;
     }
     printf("%s\n", flag ? "possible" : "impossible");
  }
  return 0;
}
