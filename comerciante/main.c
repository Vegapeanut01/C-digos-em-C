#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, abaixo, entre, acima;
    double lucro, percentualLucro, totalCompra, totalVenda, totalLucro;

    printf("Serao digitados dados de quantos proudutos? ");
    scanf("%d",&n);

    char mercadoria[n][50];
    double Pcompra[n], Pvenda[n];

    for(i=0; i<n; i++){
        printf("Produto %d: \n", i+1);
        printf("Nome: ");
        scanf("%s",&mercadoria[i]);
        printf("Preco de compra: ");
        scanf("%lf",&Pcompra[i]);
        printf("Preco de venda: ");
        scanf("%lf",&Pvenda[i]);
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for(i=0; i<n; i++){
        lucro = Pvenda[i] - Pcompra[i];
        percentualLucro = lucro * 100.0 / Pcompra[i];

        if(percentualLucro < 10.0){
            abaixo++;
        }
        else if(percentualLucro <= 20.0){
            entre++;
        }
        else{
            acima++;
        }

    }

    totalCompra = 0;
    totalVenda = 0;
    for(i=0; i<n; i++){
        totalCompra = totalCompra + Pcompra[i];
        totalVenda = totalVenda + Pvenda[i];
    }

    totalLucro = totalVenda - totalCompra;

    printf("RELATORIO: \n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n",acima);
    printf("Valor total de compra: %.2lf \n", totalCompra);
    printf("Valor total de venda: %.2lf \n", totalVenda);
    printf("Lucro total: %.2lf", totalLucro);
    return 0;
}
