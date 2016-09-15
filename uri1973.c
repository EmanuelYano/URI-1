#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int main()
{
	long long pos=-1 , soma = 0 , i ,Ncasos , *vet , rob=0;
	scanf("%lld" , &Ncasos);
	vet = calloc(Ncasos , sizeof(long long));
	for(i=0;i<Ncasos;i++)
	{
		scanf("%lld" , &vet[i]);
		soma += vet[i];
	}
	for(i=0;i<Ncasos;i++)
	{
		if(vet[i]%2 == 0)
		{
			
			pos=i+1;
			break;
		}
	} 
	rob = (pos*2)-2;
	if(pos == -1)
		printf("%lld %lld\n" , Ncasos , soma-Ncasos);
	else if(vet[0]%2 == 0 && vet[0] != 0)
		printf("%lld %lld\n" , pos , soma-rob-1);
	else	
		printf("%lld %lld\n" , pos , soma-rob);
	
	return 0;
}