#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int i = 0 , n;
	double s = 0 , m;
	do
	{
		scanf("%d" , &n);
		if(n <= 0)
			break;
		s = s + n;
		i = i + 1;
	}while(n > 0);
	if(n < 0)
	{
		m = s / i;
		printf("%.2f\n" , m);
	}
	return 0;
}
