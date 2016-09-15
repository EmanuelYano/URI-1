#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	int t , v;
	while(scanf("%d %d" , &t , &v) != EOF)
	{
		printf("%d\n" , (t*2)*v);
	}
	
	return 0;
}
	