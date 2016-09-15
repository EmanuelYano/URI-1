#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 10000

int main()
{
	int n , jog ,i , vetor[max] , sm = 0 , sj = 0;
	do
	{
		scanf("%d" , &n);
		if(n == 0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d" , &vetor[i]);
			if(vetor[i] == 0)
				sm++;
			if(vetor[i] == 1)
				sj++;
		}
		printf("Mary won %d times and John won %d times\n" , sm , sj);
		sm = 0;
		sj = 0;
		
	}while(n != 0);
	return 0;
}
	