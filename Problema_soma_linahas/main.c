#include <stdio.h>


int main()
{
    int N, M, i, j;
    double somalinha;
    double vet[5];

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d",&M);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d",&N);

    double  matriz [M][N];

    for(i=0; i<M; i++){
        printf("Digite os elementos da %da linha: \n", i+1);
        for(j=0; j<N; j++){
           scanf("%lf",&matriz[i][j]);
        }
    }

    for(i=0; i<M; i++){
        somalinha = 0;
        for(j=0; j<N; j++){
            somalinha = somalinha + matriz [i][j];
        }
        vet[i] = somalinha;
    }


    printf("VETOR GERADO: \n");
    for(i=0; i<M; i++){
        printf("%.1lf\n", vet[i]);
            }

    return 0;
}
