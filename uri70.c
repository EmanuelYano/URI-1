#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int x , c;
	scanf("%d" , &x);
	if((x % 2) == 0)
	{
		for(c = x; c <= (x + 12); c++)
		{
			if((c % 2) != 0 )
			printf("%d\n" , c);
		}	
	}
	else
	{
		for(c = x; c <= (x + 11); c++)
		{
			if((c % 2) != 0 )
			printf("%d\n" , c);
		}	
	}
	return 0;
}