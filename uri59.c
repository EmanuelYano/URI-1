#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int c;
	for(c = 0; c <= 100 ; c++)
	{
		if (c == 0)
			c = 2;
		if((c % 2) == 0 )
			printf("%d\n" , c);
	}	
	
	return 0;
}