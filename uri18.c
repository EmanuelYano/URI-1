#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define  Max 1000000

int main()
{
	long int Cont , v , tab[2][7] = {{100 , 50 , 20 , 10 , 5 , 2 , 1} , {0,0,0,0,0,0,0}};
	scanf("%li" , &v);
	printf("%li" , v);
	if (v < 0 && v > Max)
	{
		
	}
	else
	{
		for (Cont=0;Cont <7;Cont++)
		{
			tab[1][Cont] = v / tab[0][Cont];
			v = v % tab[0][Cont];
			if (v == 0) 
				Cont = 8;
		}
			for (Cont = 0; Cont < 7;Cont++)
		printf("\n%i nota(s) de R$ %i,00", tab[1][Cont] , tab[0][Cont] );
	}
	printf("\n");
	return 0;
}