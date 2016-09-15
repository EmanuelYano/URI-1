#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int s ,i ,ma , me , m , n , a , b , c ;
	s = 0;
	do 
	{
		scanf("%d %d" , &m, &n);
		if ((m == 0) || (n == 0)) 
			break;
		ma = m;
		me = m;
		if(n < me) me = n;
		if(n > ma) ma = n;
		
		for(i = me; i <= ma ; i++)
		{
			printf("%d " , i);
			s = s + i;
		} 
		printf("Sum=%d\n",s);
		s = 0;
	}while((m != 0) || (n != 0));
    return 0;
}