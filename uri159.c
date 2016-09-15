#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int  xa , i , s , x , n ;
	s = 0;
	do
	{
		scanf("%d" , &x);
		xa = x +9;
		if(x == 0)
			break;
		
		for(i = x; i <= xa ; i++)
		{
			if((i % 2) == 0)
				s += i;
		}
		printf("%d\n" , s);
		s = 0;
	}while(x != 0);
	return 0;
}