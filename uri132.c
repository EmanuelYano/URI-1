#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{   
	int i ,me , ma ,x , y ,s=0 ;
	scanf("%d %d" , &x ,&y);
	me = x;
	ma = x;
	if (y < me) me = y;
	if (y > ma) ma = y;
	for(i = me; i <= ma ; i++)
	{
		if((i % 13) != 0) s = s + i;
	}
	printf("%d" , s);
	printf("\n");
    return 0;
}

