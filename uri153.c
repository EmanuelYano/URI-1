#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i , n , f=1;
	scanf("%d" , &n);
	for(i = 1 ; i <= n ; i = i + 1)
	{
		f = f * i;
	}
	printf("%d\n" , f);
	return 0;
}
