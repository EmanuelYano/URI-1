#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
    int main()
{
    int i , lin , col , cont = 0 ;
    double M[12][12] , media , soma =  0;
    struct  str
    {
        char tipo;
    };
    struct str x;
    scanf("%c" , &x.tipo);
    for(lin = 0 ; lin < 12; lin++)
        for(col = 0 ; col < 12 ; col++)
        {
            scanf("%lf" , &M[lin][col]); 
            if((col > lin) && (lin + col > 11))
            {
                soma += M[lin][col];
                cont++;
            }
        }
    if(x.tipo == 'S' )
        printf("%.1f" , soma);
    if(x.tipo == 'M' )
    {
        media = soma / cont;
        printf("%.1f" , media);
    }
    printf("\n");
    return 0;
}