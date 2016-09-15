#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
    int n , i=0;
	struct nm 
	{
		char nome[20];
		long int frn;
	};
	struct nm x;
	
	
	scanf("%d" , &n);
	
	do
	{
		scanf("%s %d" , &x.nome , &x.frn);
		
		if(strcmp(x.nome,"Thor")==0)
			printf("Y\n");
		else
			printf("N\n");
		
		i++;
	}while(i < n);
   
   return 0;
}