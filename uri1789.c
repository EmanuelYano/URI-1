#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
    int x , maior = 0 , j=0 , n , prin;
	while(scanf("%d" , &n) != EOF)
	{	
		maior = 0;
		prin = 0;
		j = 0;
		while(j < n)
		{
			scanf("%d" , &x);
			if(x > maior)
				maior = x;		
			j++;
		}
		if(maior < 10)
			prin = 1;
		if(maior >= 10 && maior < 20)
			prin = 2;
		if(maior >= 20)
			prin = 3;
		printf("%d\n" , prin);
		
	}
    return 0;
}