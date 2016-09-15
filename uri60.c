#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float num[6]; 
	int c , d;
	d = 0;
	for (c = 0 ; c <= 5 ; c++)
	{
		scanf("%f" , &num[c]);
		if(num[c] > 0)
			d = d + 1;
		
	}
	printf("%i valores positivos" , d);
	printf("\n");
	return 0;
}