#include <stdio.h>
#include <stdlib.h>

int main()
{
    int HoraInicial, HoraFinal;

    printf("Hora inicial: ");
    scanf("%d",&HoraInicial);
    printf("Hora final: ");
    scanf("%d",&HoraFinal);

    if( HoraInicial <  HoraFinal){
        printf("O JOGO DUROU %d HORA(S)",HoraFinal -HoraInicial);
    }
    else{
        printf("O JOGO DUROU %d HORA(S)", 24 - (HoraInicial - HoraFinal));
    }



    return 0;
}
