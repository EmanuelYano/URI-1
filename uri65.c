#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int num[5] ; 
	int c , d;
	
	d = 0;
	for (c = 0 ; c <= 4 ; c++)
	{
		scanf("%d" , &num[c]);
		if(((num[c]) % 2) == 0)
		{
			d = d + 1;
		}	
	}
	printf("%i valores pares" , d);
	printf("\n");
	return 0;
}