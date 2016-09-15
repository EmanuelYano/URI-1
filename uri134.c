#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{   
	int  n ,a=0 , g=0 , d=0  ;
	do 
	{
		scanf("%d" , &n);
		if (n == 1) a = a + 1;
		if (n == 2) g = g + 1;
		if (n == 3 )d = d + 1;
		if ((n!=1)&&(n!=2)&&(n!=3)&&(n!=4))
		{
			scanf("%d" , &n);
			if (n == 1) a = a + 1;
			if (n == 2) g = g + 1;
			if (n == 3 )d = d + 1;
		}
	}while(n != 4);
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d" , a , g , d);
	printf("\n");
    return 0;
}

