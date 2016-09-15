#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define  Max 1000000

int main()
{
	long int tab[2][7] = {{100 , 50 , 20 , 10 , 5 , 2 , 1} , {0,0,0,0,0,0,0}};
	long int tab2[2][5] = {{ 50 , 25 , 10 , 5 , 1} , {0,0,0,0,0}};
	int Cont;
	struct nm
	{
		int not;
		int mod;	
	};
	struct nm x; 
	
	scanf("%d.%d" , &x.not, &x.mod);
	if (x.not < 0 && x.not > Max)
	{
		
	}
	else
	{
		printf("NOTAS:");
		for (Cont=0;Cont <7;Cont++)
		{
			tab[1][Cont] = x.not / tab[0][Cont];
			x.not = x.not % tab[0][Cont];
			if (x.not == 0) 
				Cont = 8;
		}
			for (Cont = 0; Cont < 6;Cont++)
		printf("\n%i nota(s) de R$ %i.00", tab[1][Cont] , tab[0][Cont] );
		printf("\nMOEDAS:\n");
		for (Cont=0;Cont <6;Cont++)
		{
			tab2[1][Cont] = x.mod / tab2[0][Cont];
			x.mod = x.mod % tab2[0][Cont];
			if (x.mod == 0) 
				Cont = 7;
		}
		printf("%i moeda(s) de R$ 1.00" , tab[1][6]);	
		for (Cont = 0; Cont < 3;Cont++)
		printf("\n%i moeda(s) de R$ 0.%i", tab2[1][Cont] , tab2[0][Cont] );
		printf("\n%i moeda(s) de R$ 0.05", tab2[1][3]);
		printf("\n%i moeda(s) de R$ 0.01", tab2[1][4]);
	}
	printf("\n");
	return 0;
}