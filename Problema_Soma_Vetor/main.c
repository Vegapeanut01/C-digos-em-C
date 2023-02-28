#include <stdio.h>

int main()
{
    int N, i;
    double soma, media;
    double vetor[10];

    printf("Quantos numero voce vai digitar? ");
    scanf("%d",&N);

    for(i=0; i <N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

     printf("\n\nVALORES = ");

     for(i=0; i<N; i++){
        printf("%.1lf ", vetor[i]);
     }

    soma = 0;
    for(i=0; i<N; i++){
       soma = soma + vetor[i];
    }

    printf("\nSOMA = %.2lf \n", soma);

    media = soma / N;
    printf("MEDIA = %.2lf", media);


    return 0;
}
