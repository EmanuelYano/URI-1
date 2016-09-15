#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	long int s , h , m , r;
	scanf("%li" , &s);
	h = s / 365;
	m = (s - (h*365)) / 30;
	r = (s - (h*365)) % 30;
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n" , h , m , r);
	return 0;
}