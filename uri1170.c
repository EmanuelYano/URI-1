#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
	int n  , i=0 , dias=0;
	double peso , sprdiario;
	scanf("%d" , &n);
	do
	{
		scanf("%lf" , &peso);
		while(peso > 1)
		{
			peso = peso/2;
			dias++;
		}
		printf("%d dias\n" , dias);
		dias = 0;
		i++;
	}while(i < n);
	return 0;
}
	