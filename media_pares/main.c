#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, soma, contPares;
    double media;

    printf("Quntos elementos vai ter o vetor? ");
    scanf("%d",&n);

    int vetor[n];

    for(i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }

    soma = 0;
    contPares = 0;

    for(i=0; i<n; i++){
        if (vetor[i] % 2 == 0){
            soma = soma + vetor[i];
            contPares++;
        }
    }

    if(contPares == 0){
        printf("NENHUM NUMERO PAR");
    }
    else{
        media = (double)soma / contPares;
        printf("MEDIA DOS PARES = %.1lf", media);
    }
    return 0;
}
