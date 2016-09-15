#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int atual;

int achaPos (char *infixa , char caracter)
{
   int i , tam = strlen(infixa);
   for(i=0;i<tam;i++)
   {
      if(infixa[i]==caracter)
        return i;
   }
   return -1;
}

void Posfixa(char* prefixa, char* infixa, int i, int j)
{
    int pos;
    if (i <= j)
    {
        atual++;
        pos = achaPos(infixa,prefixa[atual]);
        Posfixa(prefixa, infixa, i, pos-1);
        Posfixa(prefixa, infixa, pos+1, j);
        printf("%c", infixa[pos]);
    }
}

int main()
{
    int nCasos , i , n;
    char pre[53] , in[53];
    scanf("%d", &nCasos);
    for (i = 0; i < nCasos; i++)
    {
        atual = -1;
        scanf("%d %s %s", &n , pre , in);
        Posfixa(pre, in, 0, n-1);
        printf("\n");
    }
}
