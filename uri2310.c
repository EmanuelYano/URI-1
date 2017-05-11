#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int saquesTentados, bloqueiosTentados, ataquesTentados;
    int saquesRealizados, bloqueiosRealizados, ataquesRealizados;
} estatistica;

int main() {
    int nJog, i, somaSaquesTentados = 0, somaBloqueiosTentados = 0, somaAtaquesTentados = 0;
    int somaSaquesRealizados = 0, somaBloqueiosRealizados = 0, somaAtaquesRealizados = 0;
    char nomeJog[50];
    float percentSaques, percentBloqueios, percentAtaques;
    estatistica jogadores[10000];

    scanf("%d", &nJog);

    for (i = 0; i < nJog; i++) {
        scanf("%s", nomeJog);
        scanf("%d %d %d %d %d %d", &jogadores[i].saquesTentados ,
                                   &jogadores[i].bloqueiosTentados ,
                                   &jogadores[i].ataquesTentados ,
                                   &jogadores[i].saquesRealizados ,
                                   &jogadores[i].bloqueiosRealizados ,
                                   &jogadores[i].ataquesRealizados );
    }

    for (i = 0; i < nJog; i++) {
        somaSaquesTentados += jogadores[i].saquesTentados;
        somaSaquesRealizados += jogadores[i].saquesRealizados;
        somaAtaquesTentados += jogadores[i].ataquesTentados;
        somaAtaquesRealizados += jogadores[i].ataquesRealizados;
        somaBloqueiosTentados += jogadores[i].bloqueiosTentados;
        somaBloqueiosRealizados += jogadores[i].bloqueiosRealizados;
    }

    percentSaques =  somaSaquesRealizados * 100.0 / somaSaquesTentados;
    percentAtaques =  somaAtaquesRealizados * 100.0 / somaAtaquesTentados;
    percentBloqueios =  somaBloqueiosRealizados * 100.0 / somaBloqueiosTentados;

    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", percentSaques, percentBloqueios, percentAtaques);
    
    return 0;
}
