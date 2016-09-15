#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int x , c;
	scanf("%d" , &x);
	for(c = 0; c <= x ; c++)
	{
		if((c % 2) != 0 )
			printf("%d\n" , c);
	}	
	
	return 0;
}