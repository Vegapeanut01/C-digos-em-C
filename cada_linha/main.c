#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, maior;

    printf("Qual a ordem a matriz? ");
    scanf("%d",&n);

    int matriz[n][n], maiorLinha[n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d",&matriz[i][j]);
        }
    }


    for(i=0; i<n; i++){
        maior = matriz[i][0];
        for(j=1; j<n; j++){
         if(maior < matriz[i][j]){
            maior = matriz[i][j];
         }
        }
        maiorLinha[i] = maior;
    }

     printf("MAIOR ELEMENTO DE CADA LINHA: \n ");
     for(i=0; i<n; i++){
        printf(" %d\n",maiorLinha[i]);
     }

    return 0;
}
