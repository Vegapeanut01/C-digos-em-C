#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d",&m);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d",&n);

    int matrizA[m][n], matrizB[m][n], matrizC[m][n];

    printf("Digite os elementos da matriz A: \n ");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }

    printf("MATRIZ SOMA:\n");

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
