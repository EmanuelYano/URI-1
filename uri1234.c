#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
  char entrada[55];
  int aux , tam , i;

  while(fgets(entrada , 55 , stdin) != NULL)
  {
    tam = strlen(entrada);
    entrada[tam - 1] = '\0';
    aux = 0;
    for(i=0;i<tam;i++)
    {
      if(!isalpha(entrada[i]))
        printf("%c", entrada[i]);
      if(!aux && isalpha(entrada[i]))
      {
          if(entrada[i] <= 'z' && entrada[i] >= 'a')
            printf("%c", toupper(entrada[i]));
          else
            printf("%c", entrada[i]);
          aux++;
      }
      else if(isalpha(entrada[i]))
      {
         if(entrada[i] >= 'A' && entrada[i] <= 'Z')
            printf("%c", tolower(entrada[i]));
         else
            printf("%c", entrada[i]);
         aux--;
      }
     }
      printf("\n");
    }

  return 0;
}
