#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int i;
	double n[100] , x;
	scanf("%lf" , &x);
	for(i = 0; i <= 99 ; i++)
	{
		if(i == 0)
			n[i] = x;
		else
			n[i] = n[i-1]/2;
		printf("N[%d] = %.4lf\n" , i , n[i]);
	}
	
    return 0;
}
