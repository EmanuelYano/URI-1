#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a , b , c , M , MaiorAB , MaiorAC , MaiorBC;
	scanf("%i %i %i" , &a , &b , &c);
	MaiorAB = (a + b + abs(a-b))/2;
	MaiorAC = (a + c + abs(a-c))/2;
	MaiorBC = (b + c + abs(b-c))/2;
	M = MaiorAB;
	if (MaiorAC > M) M = MaiorAC;
	if (MaiorBC > M) M = MaiorBC;
	printf("%i eh o maior" , M);
	printf("\n");
return 0;}