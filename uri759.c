#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int n , i;
	scanf("%d" , &n);
	for(i = 0; i <= n ; i++)
	{
		if(i < (n-1))
		{
			printf("Ho ");
		}
		if(i == n)
		{
			printf("Ho!");
		}
	}
	printf("\n");
    return 0;
}