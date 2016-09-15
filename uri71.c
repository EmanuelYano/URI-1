#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int s ,x , num[2];
	s = 0;
	for(x = 0; x <= 1; x ++)
	{
		scanf("%d" , &num[x]);
		if ((num[x]%2) != 0)
			s = s + num[x];
	}
	printf("%d" , s);
	return 0;
}