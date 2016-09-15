#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_prime(unsigned long n)
{
    unsigned long i;
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

int main()
{
  int nCas;
  unsigned long long n;
  scanf("%d", &nCas);
  while(nCas--)
  {
    scanf("%llu", &n);
    if(is_prime(n))
      printf("Prime\n");
    else
      printf("Not Prime\n");
  }
  return 0;
}
