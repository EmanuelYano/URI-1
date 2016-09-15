#include <stdio.h>
#include <string.h>

int main()
{
  int nAco , nAbas;
  char str[10];
  scanf("%d %d",&nAbas , &nAco);
  while (nAco--) {
    scanf("%s", str);
    if(!strcmp(str,"fechou"))
      nAbas++;
    else
      nAbas--;
  }
  printf("%d\n",nAbas);
  return 0;
}
