#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int MDC (int A , int B);

int main()
{
	int n , n1 , n2;
	scanf("%d" , &n);
	while(n--)
	{
		scanf("%d %d" , &n1 , &n2);
		printf("%d\n" , MDC(n1 , n2));
	}
	return 0;
}



int MDC (int A , int B)
{
	if(B == 0)
		return A;
	else 
		return MDC(B,A%B);
}
