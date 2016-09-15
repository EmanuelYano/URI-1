#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i , n , x;
	scanf("%d" , &n);
	for(i = 1; i < (n+1) ; i++)
	{
		if((n < 5) || (n > 2000))
			break;
		if ((i % 2) == 0)
		{	
			x = i * i;
			printf("%d^2 = %d\n" , i , x);
		}
	}
	return 0;
}