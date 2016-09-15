#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
    char caw[8] ;
	int pisca[3]  , cont , i , j ;	
	for(cont = 0 ; cont < 3; cont++)
		pisca[cont] = 0;
		
	for(i = 0 ; i < 3 ; i++)
		{
			fgets(caw,8,stdin);
			if(strcmp(caw,"caw caw") != 0)
			{
				
					if(caw[0] == '*')
						pisca[i] += pow(2,2);
					if(caw[1] == '*')
						pisca[i] += pow(2,1);
					if(caw[2] == '*')
						pisca[i] += pow(2,0);	
				i--;
			}
		}
		for(i = 0 ; i < 3 ; i++)
			printf("%d\n" , pisca[i]);	
    return 0;
}