#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int a,i=0,j=0,vetimp[6],vetpar[6],l=0,m=0;
    while(i<15)
	{            
		scanf("%d",&a);
		if(a%2==0)
		{                   
			vetpar[l]=a;
			l++;                                 
			if(l==5)
			{
				for(j=0;j<5;j++)
				{
					printf("par[%d] = %d\n",j,vetpar[j]);
				}
				vetpar[l]=0;
				l=0;
			}                                          
		}
		if(a%2!=0)
		{
			vetimp[m]=a;
			m++;
			if(m==5)
			{
				for(j=0;j<5;j++)
				{
					printf("impar[%d] = %d\n",j,vetimp[j]);
				}
				vetimp[m]=0;
				m=0;
			}                                          
		}            
		i++;
	}                      
    if(m>0)
	{
		for(j=0;j<m;j++)
		{
			printf("impar[%d] = %d\n",j,vetimp[j]);
		}
	}
    if(l>0)
	{
		for(j=0;j<l;j++)
		{
			printf("par[%d] = %d\n",j,vetpar[j]);
		}
    }
    return 0;
}
