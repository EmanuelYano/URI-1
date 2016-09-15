#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float n1 , n2 , m;
	do
	{
		scanf("%f" , &n1);
		if((n1 > 0.0) && (n1 < 10.0))
			break;
		printf("nota invalida\n");
	}while((n1 > 10.0) || (n1 < 0.0));
	if((n1 > 0.0) && (n1 < 10.0))
	{
		do
		{
			scanf("%f" , &n2);
			if((n2 > 0.0) && (n2 < 10.0))
				break;
			if ((n2 < 0.0) || (n2 > 10.0))
				printf("nota invalida\n");
		}while((n2 > 10.0) || (n2 < 0.0));	
	}
	m = (n1 + n2)/2;
	printf("media = %.2f\n" , m);
	return 0;
}