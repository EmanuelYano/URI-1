#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    int N;

    while(scanf("%i", &N) != EOF)
	{
        if(N == 0){
            printf("vai ter copa!\n");
       }else{
            printf("vai ter duas!\n");
        }
    }
    return 0;
}