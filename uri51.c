#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	float i , s;
	scanf("%f" , &s);
	if(s <= 2000.00) printf("Isento");
	if((s >= 2000.01) && (s <=3000.00))
	{
		i = (s - 2000)*0.08;
		printf("R$ %.2f" , i);
	}
	if ((s >= 3000.01) && (s <=4500.00))
	{
		i = ((s - 3000)*0.18) + 80.00;
		printf("R$ %.2f" , i);
	}
	if ((s > 4500.00))
	{
		i = ((s - 4500)*0.28) + 350.00;
		printf("R$ %.2f" , i);
	}
	printf("\n");
	return 0;
}
