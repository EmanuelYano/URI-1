#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int x , y;
	do
	{
		scanf("%f %f" , &x , &y);
		if ((x == 0) || (y == 0))
			break;
		if (x > 0 && y > 0) printf("primeiro\n");
		if (x < 0 && y > 0) printf("segundo\n");
		if (x < 0 && y < 0) printf("terceiro\n");
		if (x > 0 && y < 0) printf("quarto\n");
	}while((x != 0) || (y != 0));
	return 0;
}