#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int num[5] ; 
	int c , d , i , p , n;
	i = 0;
	p = 0;
	n = 0;
	d = 0;
	for (c = 0 ; c <= 4 ; c++)
	{
		scanf("%d" , &num[c]);
		if(((num[c]) % 2) == 0)
			d = d + 1;			
		if(((num[c]) % 2) != 0)
			i = i + 1;
		if((num[c]) > 0)
			p = p + 1;
		if(num[c] < 0)
			n = n + 1;	
	}
	printf("%d valor(es) par(es)\n" , d);
	printf("%d valor(es) impar(es)\n" , i);
	printf("%d valor(es) positivo(s)\n" , p);
	printf("%d valor(es) negativo(s)\n" , n);
	return 0;
}