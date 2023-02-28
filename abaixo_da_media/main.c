#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double soma, media;

    printf("Quantos elemetos vai ter o vetor? ");
    scanf("%d",&n);

    double vetor[n];

    for(i=0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vetor[i]);
    }

    soma = 0;
    for(i=0; i<n; i++){
        soma = soma + vetor[i];
    }

    media = soma / n;

    printf("\n\nMEDIA DO VETOR = %.3lf", media);

    printf("\nELEMENTOS ABAIXO DA MEDIA: \n");
    for(i=0; i<n; i++){
        if( vetor[i] < media){
            printf("%.1lf \n",vetor[i]);
        }
    }


    return 0;
}
