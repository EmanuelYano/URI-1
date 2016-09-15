#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int i , menor , position , n;
	
	scanf("%d" , &n);
	
	int x[n];
	
	for(i = 0; i < n ; i++)
	{
		scanf("%d" , &x[i]);
		if (i == 0)
		{
			menor = x[i];
			position = i;
		}
		else
		{
			if(x[i] < menor)
			{
				menor = x[i];
				position = i;
			}
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n" , menor , position);
    
    return 0;
}
