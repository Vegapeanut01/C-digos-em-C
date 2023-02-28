#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, linha, coluna;
    double soma;

    printf("Qual a ordem do vetor? ");
    scanf("%d",&n);

    double matriz [n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%lf",&matriz[i][j]);
        }
    }

    //Soma de todos os elementos positivos da matriz
    soma = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(matriz[i][j] > 0){
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("\n\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    //leitura do indice de uma linha da matriz imprimindo todos os seus elementos
    printf("\nEscolha uma linha: ");
    scanf("%d",&linha);
    printf("LINHA ESCOLIDA: ");
    for(j=0; j<n; j++){
        printf("%.1lf ",matriz[linha][j]);
    }

    //leitura do indice de uma coluna da matriz imprimindo todos os elementos da coluna
    printf("\n\nEscolha uma coluna: ");
    scanf("%d",&coluna);
    printf("COLUNA ESCOLHIDA: ");
    for(i=0; i<n; i++){
        printf("%.1lf ",matriz[i][coluna]);
    }

    //diagonal principal
    printf("\n\nDIAGONAL PRINCIPAL: \n");
    for(i=0; i<n; i++){
        printf("%.1lf \n", matriz[i][i]);
    }

    //matriz com todos os negativos elevados ao quadrado
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if ( matriz[i][j] < 0 ){
                matriz[i][j] = pow(matriz[i][j],2);
            }
        }
    }



    printf("\n\nMATRIZ ALTERADA: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%.1lf  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
