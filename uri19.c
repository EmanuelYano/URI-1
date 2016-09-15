#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	long int s , h , m , r;
	scanf("%li" , &s);
	h = s / 3600;
	m = (s - (h*3600)) / 60;
	r = (s - (h*3600)) % 60;
	printf("%i:%i:%i\n" , h , m , r);
	return 0;
}