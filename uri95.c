#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int x , i , j;
	x = 1;
	j = 60;
	for (i=0;i<=12;i++)
	{	
		if (i == 0)
			printf("I=%d J=%d\n" , x , j);
		else
		{
			x = x + 3;
			j = j - 5;
			printf("I=%d J=%d\n" , x , j);
		}
	}
	
	return 0;
}