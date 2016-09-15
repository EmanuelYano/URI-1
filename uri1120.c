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
			if(num[i] == '0')
				soma += 6;
			if(num[i] == '1')
				soma += 2;
			if(num[i] == '2')
				soma += 5;
			if(num[i] == '3')
				soma += 5;
			if(num[i] == '4')
				soma += 4;
			if(num[i] == '5')
				soma += 5;
			if(num[i] == '6')
				soma += 6;
			if(num[i] == '7')
				soma += 3;
			if(num[i] == '8')
				soma += 7;
			if(num[i] == '9')
				soma += 6;
		}
		printf("%d leds" , soma);
		
		i++;
	}while(i < n);
	
	
	
	return 0;
}