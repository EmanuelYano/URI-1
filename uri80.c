#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n , c , ma , me;
	for(c = 0 ; c <= 99;c++)
	{
		if (c == 0)
		{
			scanf("%d" , &n);
			ma = n;
			me = c+1;
		}
		else
		{
			scanf("%d" , &n);
			if (n > ma)
			{
				ma = n;
				me = c+1;
			}
		}
	}
	printf("%d\n%d\n" , ma , me);
	return 0;
}