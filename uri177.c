#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int t , n[1000] , j = 0, i;
	scanf("%d" , &t);
	
	for(i = 0 ; i < 1000 ; i++)
	{
		
		if (j >= t)
			j = 0;
		printf("N[%d] = %d\n" , i , j++);
	}
	
    return 0;
}
