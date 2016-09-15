#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double a , b , c , tri , cic , tra , qua , ret , pi=3.14159;
	scanf("%lf %lf %lf" , &a , &b , &c);
	tri = (a * c) /2;
	cic = pi * (c*c);
	tra = ((a + b) * c / 2);
	qua = b*b;
	ret = a * b;
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n" , tri , cic , tra , qua , ret);
	
return 0;}