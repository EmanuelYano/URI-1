#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct
{
	int  pos , posF; //posF é pra pegar a proxima posição pra nao dar merda d pegar a mesma
	char let;
} VogCons;
int main()
{
	int  qtdCons , qtdVog , nCasos , j , i , Nop , aux, OP , OPn;
	int  OPc , OPv , cont0 , cont1;
	char palavra[10005] ;
	VogCons palavraVog[10005] , palavraCons[10005];
	scanf("%d",&nCasos);
	while(nCasos--)
	{
		qtdCons = qtdVog = 0;
		scanf("%s" , palavra);
		aux = strlen(palavra);
		scanf("%d" , &Nop);
		for(i=0;i<aux;i++)
		{
			if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
			{
				palavraVog[i].pos = i;
				palavraVog[i].let = palavra[i];
				qtdVog++;
			}
			else if(isalpha(palavra[i])==0)
			{
				palavraCons[i].pos = i;
				palavraCons[i].let = palavra[i];
				qtdCons++;
			}
		}
		while(Nop--)
		{
			scanf("%d" , &OP);
			if(OP == 2)
				printf("%s\n" , palavra);
			else 
			{
				scanf("%d" , &OPn);
				while(OP == 0)
					cont0 += OPn;
				
				while(OP == 1)
					cont1 += OPn;
				
				OPv = cont0 % qtdVog;
				OPc = cont1 % qtdCons;
				
				if(OP == 0)
				{
					for(i=0;i<qtdVog;i++)
					{
						if(i+OPv >= qtdVog)
							palavraVog[i].pos = palavraVog[i+OPv-qtdVog].pos;
						else
							palavraVog[i].pos = palavraVog[i+OPv].pos;
					}
					for(i=0;i<aux;i++)
					{
						
					}
				}
				if(OP == 1)
				{
					for(i=0;i<qtdCons;i++)
					{
						if(i+OPc >= qtdCons)
							palavraCons[i].pos = palavraCons[i+OPc-qtdVog].pos;
						else
							palavraCons[i].pos = palavraCons[i+OPc].pos;
					}
				}
			}
		}
	}
	
	return 0;
}