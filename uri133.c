#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{   
	int i ,me , ma ,x , y ;
	scanf("%d %d" , &x ,&y);
	me = x;
	ma = x;
	if (y < me) me = y;
	if (y > ma) ma = y;
	for(i = (me+1); i < ma ; i++)
	{
		if((i % 5) == 2)
			printf("%d\n" , i);
		if((i % 5) == 3)
			printf("%d\n" , i);
	}
    return 0;
}

