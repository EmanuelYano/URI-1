#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int c , q ;
	float p;
	scanf("%i %i", &c , &q);
	if ( c == 1){
		p = 4.00 * q;
	}
	if (c == 2){
		p = 4.50 * q;
	}
	if (c == 3){
		p = 5.00 * q;
	}
	if (c == 4){
		p = 2.00 * q;
	}
	if (c == 5){
		p = 1.50 * q;
	}
	printf("Total: R$ %.2f" , p);
	printf("\n");
	return 0;
}