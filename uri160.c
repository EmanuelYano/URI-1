#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int j  , c = 0 , ppl , i = 0 , t , pa , pb , anos = 0 ;
	float g1 , g2;
	scanf("%d" , &t);
	do
	{
		ppl = 0;
		c = 0;
		scanf("%d %d %f %f" , &pa , &pb , &g1 , &g2);
		ppl = pa;
		do
		{
			pa += pa * (g1/100);
			pb += pb * (g2/100);
			c++;
			if(c > 100)
				break;
		}while(pa <= pb);
		i++;
		if (c > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n" , c);

	}while(i < t);
	return 0;
}



