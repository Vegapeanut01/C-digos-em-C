#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    double Punitario, Drecebido, troco, ValorFalta;

    printf("Preco unitario do produto: ");
    scanf("%lf",&Punitario);
    printf("Quantidade comprada: ");
    scanf("%d",&quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf",&Drecebido);



    if(Punitario * quantidade > Drecebido){
        ValorFalta = Punitario * quantidade - Drecebido;
       printf("DINHEIRO INSUFISIENTE. FALTAM %.2lf REAIS", ValorFalta);
    }
    else {
        troco = Drecebido - Punitario * quantidade;
        printf("TROCO = %.2lf",troco);
    }

    return 0;
}
