#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n , t , tc , tr , ts , i;
	float pc , pr , ps;
	struct  str
	{
		int num;
		char anm;
	};
	struct str cb;
	t = 0;
	tc = 0;
	tr = 0;
	ts = 0;
	scanf("%d" , &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %c" , &cb.num , &cb.anm);
		if (cb.anm == 'C')
		{
			t = t + cb.num;
			tc = tc + cb.num;
		}
		if (cb.anm == 'R')
		{
			t = t + cb.num;
			tr = tr + cb.num;
		}
		if (cb.anm == 'S')
		{
			t = t + cb.num;
			ts = ts + cb.num;
		}
	}
	pc = (tc * 100.0) / t;
	pr = (tr * 100.0) / t;
	ps = (ts * 100.0) / t;
	
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%" , t , tc,tr,ts,pc,pr,ps);
	printf("\n");
	return 0;
}