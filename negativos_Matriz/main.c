#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d",&m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d",&n);

    int matriz[m][n];

    for(i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("VALORES NEGATIVOS:  \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
             if(matriz[i][j] < 0){
                printf("%d \n",matriz[i][j]);
             }
        }
    }




    return 0;
}
