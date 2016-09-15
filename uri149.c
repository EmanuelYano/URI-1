#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int s , a , n , i;
	s = 0;
	scanf("%d %d" , &a , &n);
	while(n <= 0)
		scanf("%d" , &n);
	for (i = a; i <= (a+n-1) ; i++)
	{
		s = s + i;
	}
	printf("%d\n" , s);
	return 0;
}
