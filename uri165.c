#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int p , j , n , x , i; 
	j = 0;
	scanf("%d" , &n);
	
	do
	{
		j++;
		p = 0;
		scanf("%d" , &x);
		for(i = 1; i <= x; i++)
		{
			if ((x % i) == 0)
				p++;
		}
		if(p == 2)
			printf("%d eh primo\n" , x);
		else
			printf("%d nao eh primo\n" , x);
		
	}while(j < n);
	return 0;
}



