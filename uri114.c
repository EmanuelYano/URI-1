#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int s;
	do
	{
		scanf("%d",&s);
		if (s == 2002)
			break;
		printf("Senha invalida\n");
	}while (s != 2002);
		printf("Acesso Permitido\n");
	return 0;
}