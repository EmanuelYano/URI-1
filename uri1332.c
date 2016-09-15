#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 10000

int main()
{
	int aux , n , i, s1=0 , s2=0 , s3=0;
	char palavra[20] , um[] = "one" , dois[] = "two" , tres[] = "three";
	scanf("%d" , &n);
	while(n--)
	{
		scanf("%s" , palavra);
		for(i=0;i<strlen(um);i++)
		{
			if(palavra[i] == um[i])
				s1++;
		}
		for(i=0;i<strlen(dois);i++)
		{
			if(palavra[i] == dois[i])
				s2++;
		}
		for(i=0;i<strlen(tres);i++)
		{
			if(palavra[i] == tres[i])
				s3++;
		}
		if(s1 > 1)
			printf("1\n" , s1);
		if(s2 > 1)
			printf("2\n" , s2);
		if(s3 > 3)
			printf("3\n" , s3);
		s1 = s2 = s3 = 0;
	}
	return 0;
}
	