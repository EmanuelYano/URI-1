#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int s = 0 , x , z , i = 0;

	scanf("%d" , &x);
	do
	{
		scanf("%d" , &z);	
	}while(z <= x);
	
	do
	{
		s = s + x ;
		i = i + 1;	
		x = x + 1;
	}while(z >= s);
	printf("%d\n" , i);
	return 0;
}
