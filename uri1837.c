#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
    int n1, n2, div, mod, i;
 
    scanf("%d %d", &n1, &n2);
 
		for(i = 0;n2<0 ? i<-n2 : i<n2 ; i++)
		{
	
		if((n1-i)%n2 == 0)
			{
				mod = i;
				div = (n1-i)/n2;
			}
		}
		printf("%d %d\n", div, mod);
    return 0;
}