#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
	int ult=0 , aux=0 , nvagoes , n , i , j , trem[100] , c;
	scanf("%d" , &n);
	while(n--)
	{
		
		scanf("%d" , &nvagoes);
		for(j=0;j<nvagoes;j++)
		{
			scanf("%d" , &trem[j]);
		}
		for(i=0;i<nvagoes;i++)
		{	
			for(c=nvagoes-1;c > 0;c--)
			{
				if(trem[c] < trem[c-1])
				{
					aux = trem[c];
					trem[c] = trem[c-1];
					trem[c-1]= aux;
					ult++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n" , ult);
		ult = 0;
	}
	return 0;
}
	