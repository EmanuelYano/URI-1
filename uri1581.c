#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int i , j , soma , ncasos , nlinguas;
	char ing[] = "ingles" , lingua[100][21];
	scanf("%d" , &ncasos);
	while(ncasos--)
	{
		soma = 0;
		scanf("%d" , &nlinguas);		
		for(i=0;i<nlinguas;i++)
		{
			scanf("%s" , lingua[i]);
			if(i > 0)
			{
				if(strcmp(lingua[i],lingua[i-1])==0)
					soma += 0;
				else
					soma += 1;
			}
		}
		if(soma == 0)
			printf("%s\n" , lingua[0]);
		else
			printf("%s\n" , ing);
	}


	return 0;
}