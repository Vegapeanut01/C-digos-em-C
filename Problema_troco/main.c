#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    double Punitario, Drecebido, troco, total;

    printf("Preco unitario do produto: ");
    scanf("%lf",&Punitario);
    printf("Quantidade comprada: ");
    scanf("%d",&quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf",&Drecebido);

    total = Punitario * quantidade;
    troco = Drecebido - total;

    printf("TROCO = %.2lf", troco);

    return 0;
}
