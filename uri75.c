#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n , c;
	scanf("%d" , &n);
	for(c = 0; c <=10000;c++)
	{
		if((c % n) == 2)
			printf("%d\n" , c);
	}
    return 0;
}