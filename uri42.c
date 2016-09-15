#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a ,b , c , maior , menor , meio;
	scanf("%i %i %i" , &a , &b , &c);
	maior = a;
	if(b > maior) maior = b;
	if(c > maior) maior = c;
	menor = c;
	if(a < menor) menor = a;
	if(b < menor) menor = b;
	if((a > b || a > c) && (a < c || a < b)) meio = a;
	if((b > a || b > c) && (b < c || b < a)) meio = b;
	if((c > b || c > a) && (c < a || c < b)) meio = c;
	printf("%i\n%i\n%i\n" , menor , meio , maior);
	printf("\n%i\n%i\n%i" , a ,b , c);
	printf("\n");
	return 0;
}