#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
	int lin2 , larg , alt , lin , col , i;
	char mapa[101][101];
	scanf("%d %d" , &larg , &alt);
	lin2 = larg-1;
	for(lin = 0 ; lin < alt ; lin++)
		for(col = 0 ; col < larg ; col++)
		{	
			scanf("%c" , &mapa[lin][col]);
		}	
	for(lin = 0 ; lin < alt ; lin++)
		for(col = 0 ; col < larg ; col++)	
				printf("%c" , mapa[lin][col]);
		printf("\n");
   return 0;
}