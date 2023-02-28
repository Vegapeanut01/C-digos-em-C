#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duracaoSegundos, horas, minutos, segundos, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d",&duracaoSegundos);

    horas = duracaoSegundos / 3600;
    resto = duracaoSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d : %d : %d ",horas, minutos, segundos);

    return 0;
}
