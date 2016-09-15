#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int ya , j , i , s , c , x , y , n ;
	j = 0;
	s = 0;
	c = 1;
	scanf("%d" , &n);
	do
	{
		c++;
		scanf("%d %d" , &x , &y);
		ya = ((y*2)-1+x);
		for(i = x; i <= ya ; i++)
		{
			if((i%2)!= 0)
				s += i;
		}
		printf("%d\n" , s);
		s = 0;
	}while(c <= n);
	return 0;
}