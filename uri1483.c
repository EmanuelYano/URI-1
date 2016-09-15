#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
	unsigned long long cont ,aux1 , aux2 , Apost , Sort , i , j;
	double Vapost , Result;
	int contGrj, contGrs;
	while(1)
	{
		scanf("%lf %llu %llu" , &Vapost , &Apost , &Sort);
		if(Vapost == 0.00 && Apost == 0 && Sort == 0)
			break;
		if(Sort % 10000 == Apost % 10000)
            Result = Vapost * 3000;
        else if(Sort % 1000 == Apost % 1000)
			Result = Vapost * 500;
		else if(Sort % 100 == Apost % 100)
			Result = Vapost * 50;
		else 
		{
			contGrj = cont = 0;
			while(cont < 101)
			{
				if(cont%4 == 0)
					contGrj++;
				cont++;
				if(Apost%100 == cont)
					break;
			}
			if(Apost%100==00)
			{
				contGrj = 25;
			}
			contGrs = cont = 0;
			while(cont < 101)
			{
				if(cont%4 == 0)
					contGrs++;
				cont++;
				if(Sort%100 == cont)
					break;
			}
			if(Sort%100==00)
			{
				contGrs = 25;
			}
			if(contGrj == contGrs)
				Result =Vapost * 16;
			else
				Result =  0.00;
		}
		
		printf("%.2lf\n" , Result);
		
	}
	return 0;
}