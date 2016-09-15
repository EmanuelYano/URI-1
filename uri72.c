#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a , b , n , i , x;
	i = 0;
	a = 0;
	b = 0;
	scanf("%d" , &n);
	do 
	{
		i = i + 1;
		scanf("%d" , &x);
		if ((x >= 10) && (x <= 20)) 
			a = a + 1;
		else 
			b = b + 1;
	}while(i < n);
	printf("%d in\n%d out\n" , a , b);	
	return 0;
}