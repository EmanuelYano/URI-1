#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	long int a , b , c;
	scanf("%ld %ld %ld" , &a , &b , &c);
	if((b < a) && (c >= b))
		printf(":)");
	else if((b > a) && (c <= b))
		printf(":(");
	else if ((b > a)&&(c > b)&&((c - b) < (b - a)))
		printf(":(");
	else if((b > a)&&(c > b)&&((c - b) >= (b - a)))
		printf(":)");
	else if((b < a)&&(c < b)&&((c - b) > (b - a)))
		printf(":)");
	else if((b < a)&&(c < b)&&((c - b) <= (b - a)))
		printf(":(");
	else if((b == a) && (b <= c))
		printf(":)");
	else
		printf(":(");
	printf("\n");
    return 0;
}
