#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float i = 1.0 , s = 0.0;
	while(i + 2 <= 39)
	{
		s =  s + (2.0*i - 1.0)/(pow(2,i-1.0));
		i++;
	}
	printf("%.2f\n" , s);
	return 0;
}
