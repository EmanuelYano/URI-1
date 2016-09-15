#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int  qtdR , i , j , nproc , nciclo;
	char palavra[51];
	while(scanf("%s %d" , palavra , &nproc) != EOF)
	{
		nciclo = qtdR = 0;
		for(i = 0; i < strlen(palavra) ; i++)
		{
			if(palavra[i] == 'W')
				nciclo += 1;
			if(palavra[i] == 'R' && qtdR < nproc)
				qtdR += 1;
			if(qtdR == nproc)
				nciclo +=1;
		}
		printf("%d\n" , nciclo);
		
		
	}
	return 0;
}