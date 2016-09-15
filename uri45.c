#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double a , b , c , x;
	scanf("%lf %lf %lf" , &a , &b , &c);
	if ((b > a) && (b > c)){
		x = a;
		a = b;
		b = x;
	}
	if ((c > a) && (c > b)){
		x = a;
		a = c;
		c = x;
	}
	if (a >= b + c) printf("NAO FORMA TRIANGULO\n");
	if ((a*a) == (b*b) + (c*c) && (a < b + c)) printf("TRIANGULO RETANGULO\n");
	if ((a*a) > (b*b) + (c*c)&& (a < b + c))  printf("TRIANGULO OBTUSANGULO\n");
	if ((a*a) < (b*b) + (c*c)&& (a < b + c))  printf("TRIANGULO ACUTANGULO\n");
	if ((a == b) && (b == c) && (a == c)&& (a < b + c))   printf("TRIANGULO EQUILATERO\n");
	if (((a == b) && (a != c) && (b != c)) || ((b == c) && (b != a) && (c != a)) || ((a == c) && (a != b)&& (c != b))&& (a < b + c))   printf("TRIANGULO ISOSCELES\n");
	return 0;
}