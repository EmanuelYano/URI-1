#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1


int main()
{
	char num[101];
	int soma=0 , cont , j , i=0 , n;
	scanf("%d" , &n);
	do
	{
		scanf("%s" , num);
		cont = strlen(num);
		
		for(j=0;j < cont ; j++)
		{
			if(num[j] == '0')
				soma += 6;
			if(num[j] == '1')
				soma += 2;
			if(num[j] == '2')
				soma += 5;
			if(num[j] == '3')
				soma += 5;
			if(num[j] == '4')
				soma += 4;
			if(num[j] == '5')
				soma += 5;
			if(num[j] == '6')
				soma += 6;
			if(num[j] == '7')
				soma += 3;
			if(num[j] == '8')
				soma += 7;
			if(num[j] == '9')
				soma += 6;
		}
		printf("%d leds\n" , soma);
		soma = 0;
		i++;
	}while(i < n);
	
	
	
	return 0;
}