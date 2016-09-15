#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int n,t,cont;
	unsigned long long a,b,aux;
    scanf("%d", &t);
    do
    {   
		scanf("%d", &n);    
        a=1;
        b=0;
        if(n==0)
            aux = 0;
        else if(n!=0)
        {   
			for(cont=1;cont<=n;cont++)
            {   aux = a+b;
                a = b;
                b = aux;
            }
        }   
        printf("Fib(%d) = %llu\n", n,aux);
        t--;     
    }while(t != 0);
    return 0;
}