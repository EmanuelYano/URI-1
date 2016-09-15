#include <stdio.h>

int main()
{
  int n , som2 , som3 , som4 , som5, nCas;
  som2=som3=som4=som5=0;
  scanf("%d",&nCas);
  while(nCas--)
  {
    scanf("%d",&n);
    if(n%2 == 0)
      som2++;
    if(n%3 == 0)
      som3++;
    if(n%4 == 0)
      som4++;
    if(n%5 == 0)
      som5++;
  }
  printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", som2 , som3 , som4 , som5);
  return 0;
}
