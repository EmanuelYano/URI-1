#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int func(int n, int k);

int main ()
{
	int n, x, y, j, num, pulo;
    while(TRUE)
	{
           scanf("%d",&n);
           if(n == 0) break;
           y = 1;
           while(TRUE)
		   {
                if(func(n,y) != 11) 
					y++;
                else 
					break;
           }
           printf("%d\n",y);
    }
   return 0;
}

int func(int n, int k) {
    int i , r = 0;
    for (i = 1; i < n; i++)
        r = (r + k) % i;
    return r;
}