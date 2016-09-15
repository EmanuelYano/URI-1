#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float num[6] , s , m; 
	int c , d;
	s = 0;
	d = 0;
	for (c = 0 ; c <= 5 ; c++)
	{
		scanf("%f" , &num[c]);
		if(num[c] > 0)
		{
			d = d + 1;
			s = s + num[c];
		}	
	}
	m = s / d;
	printf("%i valores positivos\n" , d);
	printf("%.1f", m);
	printf("\n");
	return 0;
}