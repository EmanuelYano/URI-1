#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{   
	int te=0 , ti=0 , tg=0 , tp=0 , cnt , i , g ;
	
	do 
	{
		scanf("%d %d" , &i , &g);
		tp = tp + 1;
		if (i == g) te = te + 1;
		if (i > g)  ti = ti + 1;
		if (g > i)  tg = tg + 1;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d" , &cnt);
		if (cnt == 2)
			break;
	}while(cnt == 1);
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n" , tp , ti , tg , te);
	if (ti > tg) printf("Inter venceu mais");
	if (tg > ti) printf("Gremio venceu mais");
	if (ti == tg) printf("Nao houve vencedor");
	printf("\n");
    return 0;
}

