#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int j , n , x , i , s ; 
	scanf("%d" , &n);
	do
	{
		j++;
		s = 0;
		scanf("%d" , &x);
		for(i = 1; i < x; i++)
		{
			
			if((x%i) == 0)
			{
				
				s +=  i;
			}
		}
		if(x == s)
			printf("%d eh perfeito\n" , x);
		else
			printf("%d nao eh perfeito\n" , x);
		
	}while(j < n);
	return 0;
}



