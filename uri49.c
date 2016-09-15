#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	
	char f1[20] , f2[20] , f3[20] ;
	scanf("%s",&f1);
	scanf("%s",&f2);
	scanf("%s",&f3);
	if ((strcmp(f1,"vertebrado") == 0)&&(strcmp(f2,"ave") == 0)&&(strcmp(f3,"carnivoro") == 0)) 
		printf("aguia");
	if ((strcmp(f1,"vertebrado") == 0)&&(strcmp(f2,"ave") == 0)&&(strcmp(f3,"onivoro") == 0)) 
		printf("pomba");
	if ((strcmp(f1,"vertebrado") == 0)&&(strcmp(f2,"mamifero") == 0)&&(strcmp(f3,"onivoro") == 0)) 
		printf("homem");
	if ((strcmp(f1,"vertebrado") == 0)&&(strcmp(f2,"mamifero") == 0)&&(strcmp(f3,"herbivoro") == 0)) 
		printf("vaca");
	if ((strcmp(f1,"invertebrado") == 0)&&(strcmp(f2,"inseto") == 0)&&(strcmp(f3,"herbivoro") == 0)) 
		printf("lagarta");
	if ((strcmp(f1,"invertebrado") == 0)&&(strcmp(f2,"inseto") == 0)&&(strcmp(f3,"hematofago") == 0)) 
		printf("pulga");
	if ((strcmp(f1,"invertebrado") == 0)&&(strcmp(f2,"anelideo") == 0)&&(strcmp(f3,"hematofago") == 0)) 
		printf("sanguessuga");
	if ((strcmp(f1,"invertebrado") == 0)&&(strcmp(f2,"anelideo") == 0)&&(strcmp(f3,"onivoro") == 0)) 
		printf("minhoca");
	printf("\n");
	return 0;
}