#include <stdio.h>


int main()
{
    int N,i;
    int vet[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);



    for(i=0; i<N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("NUMEROS NEGATIVOS:\n");

    for(i=0; i<N; i++){
        if(vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}
