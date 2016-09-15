#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int x , i , j;
	j = 8;
	for(x = 0; x <= 2 ; x++)
	{
		j = j - 1;
		printf("I=1 J=%d\n" , j);
	}
	j = j + 5;
	for(x = 0; x <= 2 ; x++)
	{
		j = j - 1;
		printf("I=3 J=%d\n" , j);
	}
	j = j + 5;
	for(x = 0; x <= 2 ; x++)
	{
		j = j - 1;
		printf("I=5 J=%d\n" , j);
	}
	j = j + 5;
	for(x = 0; x <= 2 ; x++)
	{
		j = j - 1;
		printf("I=7 J=%d\n" , j);
	}
	j = j + 5;
	for(x = 0; x <= 2 ; x++)
	{
		j = j - 1;
		printf("I=9 J=%d\n" , j);
	}
 return 0;
}