#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int main()
{
	unsigned long long n1,n2,prin;
	
	
	while(scanf("%llu %llu",&n1,&n2) != EOF)
	{
		//if(n1 > n2)
			prin = abs(n2-n1);
		//else
			//prin = n2 - n1;
		printf("%llu\n" , prin);
	}
   return 0;
}