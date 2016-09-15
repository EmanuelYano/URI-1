#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n , i ;
	do
	{
		scanf("%d" , &n);
		if(n == 0)
			break;
		for(i = 1;i < n;i++)
		{
			printf("%d ",i);
		}
		printf("%d\n",n);
	}while(n != 0);
	return 0;
}
