#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
#define TRUE 1
#define FALSE 0
 
typedef struct rena
{
    char  nome[200];
    int   peso , idade;
    float altura;
} Rena;
 
int comp (const void *P1 , const void *P2)
{
    Rena *A = (Rena *)P1 , *B = (Rena *)P2;
    if(A->peso > B->peso)
        return -1;
    else if(A->peso < B->peso)
        return 1;
    else
    {
        if(A->idade > B->idade)
            return 1;
        else if(A->idade < B->idade)
            return -1;
        else
        {
            if(A->altura > B->altura)
                return 1;
            else if(A->altura < B->altura)
                return -1;
            else
                return strcmp(A->nome , B->nome);
        }
    }
     
}
 
 
int main()
{
    int  cont , i=0 , j , n , Ntot , Npux;
    Rena *vet;
    scanf("%d" , &n);
    while(i < n)
    {
        i++;
        scanf("%d %d" , &Ntot , &Npux);
        vet = calloc(Ntot , sizeof(Rena));
        cont = Ntot;
        for(cont=0;cont<Ntot;cont++)
        {
            scanf("%s %d %d %f" , vet[cont].nome , &vet[cont].peso , &vet[cont].idade , &vet[cont].altura);
        }
         
        qsort(vet , Ntot , sizeof(Rena) , comp);
        printf("CENARIO {%d}\n" , i);
        for(j=0;j<Npux;j++)
        {
            printf("%d - %s\n" , j+1 , vet[j].nome);
        }
    }
    return 0;
}