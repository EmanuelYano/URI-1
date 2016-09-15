#include <stdio.h>
#include <stdlib.h>

int main()
{
  int t , n , cont=1 , i , j;
  while(scanf("%d" , &n) != EOF)
  {
     printf("Caso %d: " , cont);
     cont++;

       t = 1;
       for(i=1;i<=n;i++)
       {
          for(j=1;j<=i;j++)
          {
            t++;
          }
       }
       if(t <= 1)
          printf("1 numero\n");
       else
          printf("%d numeros\n" , t);
       printf("0");
       for(i=1;i<=n;i++)
       {
          for(j=1;j<=i;j++)
          {
            printf(" %d" ,i);
          }
       }

     printf("\n\n");
  }
  return 0;
}
