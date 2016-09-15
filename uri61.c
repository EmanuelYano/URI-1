#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int  dia1 [20], dia2 , w , x , y , z , d1 , d2 , h1 , h2 , m1 , m2 , s1 , s2;
	scanf("%s" , &dia1);
	scanf("%d" , &d1);
	scanf("%d" , &h1);
	scanf(" : ");
	scanf("%d" , &m1);
	scanf(" : ");
	scanf("%d" , &s1);
	
	scanf("%s" , &dia2);
	scanf("%d" , &d2);
	scanf("%d" , &h2);
	scanf(" : ");
	scanf("%d" , &m2);
	scanf(" : ");
	scanf("%d" , &s2);
	w = d2 - d1;
	x = h2 - h1;
	y = m2 - m1;
	z = s2 - s1;
	if (h1 > h2)
	{
		x = (24 + h2) - h1;
		w = w - 1;
	}
	if (m1 > m2)
	{
		y = (60 + m2) - m1;
		x = x - 1;
	}
	if (s1 > s2)
	{
		z = (60 + s2) - s1;
		y = y - 1;	
	}
	
	printf("%d dia(s)\n" , w);
	printf("%d hora(s)\n" , x);
	printf("%d minuto(s)\n" , y);
	printf("%d segundo(s)\n" , z);
	return 0;
}