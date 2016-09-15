#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 233000

int main()
{
	int i , s1=0 , s0=0 , n , vetor[max];
	scanf("%d" , &n);
	for(i=0 ; i < n ; i++)
	{
		scanf("%d" , &vetor[i]);
		if(vetor[i] == 1)
			s1++;
		if(vetor[i] == 0)
			s0++;
	}
	if(s1 >= s0)
		printf("N\n");
	else if(s0 > s1)
		printf("Y\n");
	return 0;
}
	