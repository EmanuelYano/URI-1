#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
int main()
{
   int  l1 , l2 , pcte ;
   double aux , prin;
   do
   {
	   scanf("%d" , &l1);
	   if(l1 == 0 )
		   break;
	   scanf("%d %d" ,  &l2 , &pcte);
	   aux = (100 * l1 * l2)/pcte;
	   prin = floor(sqrt(aux));
	   
	   printf("%.0lf\n" , prin);
   }while(l1 != 0);
    return 0;
}