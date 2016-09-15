#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n , ht;
	float s , vh;
	scanf("%d %d %f" , &n , &ht , &vh);
	s = vh * ht;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n" , n , s);
	return 0;
}