#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
	char auxF , aux ,zuera[26],palavra[100] , frase[100];
	int auxS , contprin ,  i , j , cont;
	
	while(gets(palavra) != NULL)
	{
		aux = strlen(palavra);
		for(i=0; i < 26; i++)
			zuera[i] = 0;
		for(i=0; i < aux && palavra[i] != '\0'; i++)
			if (palavra[i] >= 'a' && palavra[i] <= 'z')
			zuera[ palavra[i] - 'a' ] = 1;
		aux = 0;
		contprin = 0;
		for(i=0; i < 26; i++)
		{
			if(i == 0 && zuera[i] == 1) 
			{
				aux = i + 'a';
				auxF = i + 'a';
			}
			if(i > 0)
			{
				if(i == 25 && zuera[25] == 1 && contprin != 0)
				{
					auxF = i + 'a';
					if(zuera[i-1] == 0)
						aux = i + 'a';
					printf(", %c:%c" , aux , auxF);
				}
				if(i == 25 && zuera[25] == 1 && contprin == 0)
				{
					auxF = i + 'a';
					if(zuera[i-1] == 0)
						aux = i + 'a';
					printf("%c:%c" , aux , auxF);
				}
				if(zuera[i] == 1 && aux != 0 && i != 25)
				{
					auxF = i + 'a';
				}
				
				if(zuera[i] == 1 && zuera[i-1] == 0 && zuera[i+1] == 0 && i != 25)
				{
					aux = i + 'a';
					auxF = i + 'a';
				}
				
				if(zuera[i] == 1 && aux == 0 && i != 25) 
				{
					aux = i + 'a';
					auxF = '\0';
				}
				
				if(zuera[i] == 0 && aux != 0 && contprin != 0)
				{
					printf(", %c:%c" , aux , auxF);
					aux = 0;
					contprin++;
				}
				
				if(zuera[i] == 0 && aux != 0 && contprin == 0)
				{
					printf("%c:%c" , aux , auxF);
					aux = 0;
					contprin++;
				}
			}
		}		
		printf("\n");		
	}
	
	


	return 0;	
}