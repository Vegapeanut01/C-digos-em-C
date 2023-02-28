#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, contHomens, contMulheres;
    double Menor, Maior, media, alturaMulheres;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    double alturas[n];
    char generos[n];

    for(i=0; i<n; i++){
        printf("Altura da %da pessoa: ",i + 1);
        scanf("%lf",&alturas[i]);
        printf("Genero da %da pessoa: ",i + 1);
        scanf(" %c",&generos[i]);
    }

    //menor e maior altura
    Menor = alturas[0];
    Maior = alturas[0];
    for(i=0; i<n; i++){
     if(alturas[i] < Menor){
        Menor = alturas[i];
     }
     else if(alturas[i] > Maior){
        Maior = alturas[i];
     }
    }

    //Media de altura das melheres e quantidade de homens
    media = 0;
    contMulheres = 0;

    for(i=0; i<n; i++){
        if(generos[i] == 'F'){
            contMulheres++;
            alturaMulheres = alturaMulheres + alturas[i];
        }
    }

    media = alturaMulheres / contMulheres;
    contHomens = n - contMulheres;

    printf("Menor altura = %.2lf \n", Menor);
    printf("Maior altura = %.2lf \n", Maior);
    printf("Media de altura das mulheres = %.2lf \n", media);
    printf("Numero de homens = %d\n", contHomens);
    return 0;
}
