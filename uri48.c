#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double p , m ,r ,s , r1 , r2 ,r3 ,r4 ,r5;
	r1 = 0.15;
	r2 = 0.12;
	r3 = 0.10;
	r4 = 0.07;
	r5 = 0.04;
	scanf("%lf" , &s);
	if ((s >= 0) && (s <= 400.00)){
		r = (s * r1) + s;
		m = r - s;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%" , r , m );
	}
	if ((s >= 400.01) && (s <= 800.00)){
		r = (s * r2) + s;
		m = r - s;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%", r , m);
	}
	if ((s >= 800.01) && (s <= 1200.00)){
		r = (s * r3) + s;
		m = r - s;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%", r , m);
	}
	if ((s >= 1200.01) && (s <= 2000.00)){
		r = (s * r4) + s;
		m = r - s;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%", r , m);
	}
	if ( s > 2000)
	{
		r = (s * r5) + s;
		m = r - s;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%", r , m);
	}
	printf("\n");
	return 0;
}