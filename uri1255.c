#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
	int  aux2 , maior , Ncasos , i , j ;
	char  aux ,zuera[26] , frase[250];
	scanf("%d" , &Ncasos);
	fgets(frase, sizeof(frase) , stdin);
	while(Ncasos--)
	{
		fgets(frase, sizeof(frase) , stdin);
		aux2 = strlen(frase);
		for(i=0; i < 26; i++)
            zuera[i] = 0;
       
	   for(i=0; i < aux2 && frase[i] != '\0'; i++)
		{
            if (frase[i] >= 'a' && frase[i] <= 'z')
				zuera[ frase[i] - 'a' ] += 1;
			if (frase[i] >= 'A' && frase[i] <= 'Z')
				zuera[ frase[i] - 'A' ] += 1; 
		}

		for(i=0; i < 26; i++)
		{
			if(i==0)
				maior = zuera[i];
			else
			{
				if(zuera[i] > maior)
					maior = zuera[i];
			}
		}

		for(i=0; i < 26; i++)
		{
			if(zuera[i] == maior)
			{
				aux = i + 'a';
				printf("%c" , aux);
			}
		}
		printf("\n");	
	}
	return 0;
}