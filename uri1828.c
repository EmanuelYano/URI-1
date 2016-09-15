#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
#define TRUE 1
  
 
int main()
{
    int i=0 , n;
	char sheldon[20] , raj[20] , tsr[] = "tesoura" , pap[] = "papel" , spk[] = "Spock" , lgt[] = "lagarto" , ped[] = "pedra";
	scanf("%d" , &n);
	do
	{
		scanf("%s %s" , sheldon , raj);
		i++;
		if(strcmp(sheldon,raj) == 0)
			printf("Caso #%d: De novo!\n" , i);
		if ((strcmp(sheldon,tsr) == 0)&&((strcmp(raj,pap) == 0)||(strcmp(raj,lgt)==0)))
			printf("Caso #%d: Bazinga!\n" , i);
		if((strcmp(sheldon,pap)==0)&&((strcmp(raj,ped)==0)||(strcmp(raj,spk)==0)))
			printf("Caso #%d: Bazinga!\n" , i);
		if((strcmp(sheldon,ped)==0)&&((strcmp(raj,lgt)==0)||(strcmp(raj,tsr)==0)))
			printf("Caso #%d: Bazinga!\n" , i);
		if((strcmp(sheldon,spk)==0)&&((strcmp(raj,tsr)==0)||(strcmp(raj,ped)==0)))
			printf("Caso #%d: Bazinga!\n" , i);
		if((strcmp(sheldon,lgt)==0)&&((strcmp(raj,spk)==0)||strcmp(raj,pap)==0))
			printf("Caso #%d: Bazinga!\n" , i);
		if ((strcmp(raj,tsr) == 0)&&((strcmp(sheldon,pap) == 0)||(strcmp(sheldon,lgt)==0)))
			printf("Caso #%d: Raj trapaceou!\n" ,i);
		if((strcmp(raj,pap)==0)&&((strcmp(sheldon,ped)==0)||(strcmp(sheldon,spk)==0)))
			printf("Caso #%d: Raj trapaceou!\n" , i);
		if((strcmp(raj,ped)==0)&&((strcmp(sheldon,lgt)==0)||(strcmp(sheldon,tsr)==0)))
			printf("Caso #%d: Raj trapaceou!\n" , i);
		if((strcmp(raj,spk)==0)&&((strcmp(sheldon,tsr)==0)||(strcmp(sheldon,ped)==0)))
			printf("Caso #%d: Raj trapaceou!\n" , i);
		if((strcmp(raj,lgt)==0)&&((strcmp(sheldon,spk)==0)||strcmp(sheldon,pap)==0))
			printf("Caso #%d: Raj trapaceou!\n" , i);
		
	}while(i < n);
    return 0;
}