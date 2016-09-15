#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int r ,n , i;
	scanf("%d" , &n);
	for(i = 1; i <= 10;i++)
	{
		r = i * n;
		printf("%d x %d = %d\n",i,n,r);
	}
    return 0;
}