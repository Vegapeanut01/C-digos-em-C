#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, quantidade;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&N);

    int matriz [N][N];

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
        printf("Elemento [%d,%d]: ",i,j);
        scanf("%d", &matriz[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL :\n");
    for(i=0; i<N; i++){
        printf("%d ", matriz[i][i]);
    }


    quantidade = 0;
    for (i= 0; i<N; i++){
        for (j=0; j<N; j++){
            if(matriz[i][j] < 0){
                quantidade ++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", quantidade);

    return 0;
}
