#include <stdio.h>
#include <math.h>
#include <string.h>

int primos[3502];

int flavious(int n)
{
    int i , r = 0;
    for (i = 1; i <= n; i++)
		{
        r = (r + primos[n-i]) % i;
    }
    return r;
}

int isPrime(int n)
{
    int i;
    if (n == 2)
      return 1;
    if (n % 2 == 0 || n < 2)
      return 0;
    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        return 0;
    }
    return 1;
}

void primeNumbers()
{
     memset(primos, 0, sizeof(primos));
     int j;
     int a = 0;
     for(j = 2; j < 32650; j++)
		 {
        if(isPrime(j))
				{
            primos[a] = j;
            a++;
        }
     }
}

int main()
{
    int x;

    primeNumbers();

    while(scanf("%d",&x) && x != 0)
		{
       printf("%d\n",flavious(x)+1);
    }
    return 0;
}
