#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
	unsigned long long peso , pesokg;
	int n  , i=0 , casas;
	scanf("%d" , &n);
	do
	{
		scanf("%d" , &casas);
		if(casas == 64)
			printf("1537228672809129 kg\n" , pesokg);
		else{
			peso = pow(2,casas);
			pesokg=peso/12000;
			printf("%llu kg\n" , pesokg);
		}
		i++;
	}while(i < n);
	return 0;
}
	