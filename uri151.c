#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int p = 0, s = 1 , t , n , i;
	scanf("%d" , &n);

	for(i = 0; i < (n-1) ; i ++)
	{
		if (i <= 1)
		{
			s = i;
		}
		else
		{
			t = p + s;
			p = s;
			s = t;
		}
		printf("%d ", s);
	}
	t = p + s;
	p = s;
	s = t;
	printf("%d\n" , s);
	return 0;
}
