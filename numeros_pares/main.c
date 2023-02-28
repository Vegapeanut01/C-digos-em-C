#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, qtd;

    printf("quantos numeros voce vai digitar? ");
    scanf("%d",&n);

    int vetor[n];
    qtd = 0;

    for(i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }

    printf("NUMEROS PARES:\n");
    for(i=0; i<n; i++){
        if (vetor[i] % 2 == 0){
            printf(" %d ",vetor[i]);
            qtd++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d", qtd);

    return 0;
}
