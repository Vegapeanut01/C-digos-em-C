#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos;
    double ValorPagar, valor = 50.00;

    printf("Digite a quantidade de minutos: ");
    scanf("%d",&minutos);

    if(minutos > 100){
        valor = valor + 2 * (minutos - 100);
    }

    printf("Valor a pagar: R$ %.2lf",valor);

    return 0;
}
