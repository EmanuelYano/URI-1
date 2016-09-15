#include <stdio.h>

int main()
{
	int n, p, t;

	p = 2; t = 1;
  scanf("%d", &n);
	while(p != 1)		{
		if(p <= n/2)
      p += p;
		else
      p -= (n - p + 1);
		t++;
	}

	printf("%d\n", t);
	return 0;
}
