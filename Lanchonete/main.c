#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    double valorPagar;

    printf("Codigo do produto comprado: ");
    scanf("%d",&codigo);
    printf("Quantidade comprada: ");
    scanf("%d",&quantidade);

    switch (codigo){
    case 1 :
       valorPagar =  5.00 * quantidade;
    break;

    case 2 :
       valorPagar =  3.50 * quantidade;
    break;

    case 3 :
       valorPagar =  4.80 * quantidade;
    break;

    case 4 :
       valorPagar =  8.90 * quantidade;
    break;

    case 5 :
       valorPagar =  7.32 * quantidade;
    break;

    default:
        printf("Codigo nao aceito. Digite outro!");
    }



    printf("Valor a pagar: R$%.2lf", valorPagar);

    return 0;
}
