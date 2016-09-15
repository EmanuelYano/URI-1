#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	double taxaA,taxaB;
    int j, popul_a, popul_b;
    for(j=0 ; popul_a<popul_b && j <= 100; j++)
	{
		popul_a += int(taxaA/100*popul_a);
		popul_b += int(taxaB/100*popul_b);
      }

	printf("%d anos\n" , j);  
}

	int i , s , c , x , y , n , ma , me;
	
	c = 1;
	scanf("%d" , &n);
	do
	{
		s = 0;
		c = c + 1;
		scanf("%d %d" , &x , &y);
		ma = x;
		me = x;
		if(y > ma)
			ma = y;
		if(y < me)
			me = y;
		for(i = (me+1) ; i < ma ; i++)
		{
			if((i % 2) != 0)
				s = s + i;
		}
		printf("%d\n" , s);
		
	}while(c <= n);
	return 0;
}