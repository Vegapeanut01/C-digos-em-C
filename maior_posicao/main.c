#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, posicao;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);

    double vetor[n];

    for(i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;
    for(i=0; i<n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("\n\nMAIOR VALOR = %.2lf\n",maior);
    printf("POSICAO DO MAIOR VALOR = %d", posicao);

    return 0;
}
