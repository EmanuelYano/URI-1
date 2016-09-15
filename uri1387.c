#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 10000

int main()
{
	int l ,r,s;
	do
	{
		scanf("%d %d" , &l , &r);
		if(l == 0 && r == 0)
			break;
		if(l < 0)
			l = l * -1;
		if(r < 0)
			r = r * -1;	
		s = l + r;
		printf("%d\n" , s);
		
	}while(1);
	return 0;
}
	