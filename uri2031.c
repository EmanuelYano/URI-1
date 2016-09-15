#include <stdio.h>
#include <string.h>

int main()
{
  int nCas;
  char jog1[15] , jog2[15];
  scanf("%d", &nCas);
  while(nCas--)
  {
    scanf("%s %s", jog1 , jog2);
    if(!strcmp(jog1,"ataque") && (!strcmp(jog2 , "pedra") || !strcmp(jog2 ,"papel")))
      printf("Jogador 1 venceu\n");
    else if(!strcmp(jog2,"ataque") && (!strcmp(jog1 , "pedra") || !strcmp(jog1 ,"papel")))
      printf("Jogador 2 venceu\n");
    else if(!strcmp(jog1,"pedra") && !strcmp(jog2,"papel"))
      printf("Jogador 1 venceu\n");
    else if(!strcmp(jog2,"pedra") && !strcmp(jog1,"papel"))
      printf("Jogador 2 venceu\n");
    else if(!strcmp(jog1 , "pedra") && !strcmp(jog2 , "pedra"))
      printf("Sem ganhador\n");
    else if(!strcmp(jog1 , "papel") && !strcmp(jog2,"papel"))
      printf("Ambos venceram\n");
    else
      printf("Aniquilacao mutua\n");
  }
  return 0;
}
