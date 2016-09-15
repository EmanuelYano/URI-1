#include <stdio.h>

int main()
{
  int j1 , j2 , p , r1 , r2;
  scanf("%d %d %d %d %d",&p , &j1 , &j2 , &r1 , &r2);
  if(r1 && r2)
    printf("Jogador 2 ganha!\n");
  if(r1 && r2 == 0)
    printf("Jogador 1 ganha!\n");
  if(r1 == 0 && r2)
    printf("Jogador 1 ganha!\n");
  if(r1 == 0 && r2 == 0)
  {
    if((j1 + j2) % 2)
    {
      if(p == 1)
        printf("Jogador 2 ganha!\n");
      else
        printf("Jogador 1 ganha!\n");
    }
    else
    {
      if(p == 1)
        printf("Jogador 1 ganha!\n");
      else
        printf("Jogador 2 ganha!\n");
    }
  }
  return 0;
}
