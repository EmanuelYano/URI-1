#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    int n, i;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d %d %d\n", i, pow(i,2),pow(i,3));
		printf("%d %d %d\n", i, pow(i,2)+1, pow(i,3)+1);
	}
	
    return 0;
}