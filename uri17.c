#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int t , v ;
	double l , k = 12;
	scanf("%d %d",&t,&v);
	l = (t*v) / k;
	printf("%.3f\n" , l);
return 0;}