#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d",&n);

    int vetorA[n];
    int vetorB[n];
    int vetorC[n];

    //primeiro vetor
    printf("Digite os valores do vetor A:\n");
    for(i=0; i<n; i++){
        scanf("%d",&vetorA[i]);
    }

    //segundo vetor
    printf("Digite os valores do vetor B:\n");
    for(i=0; i<n; i++){
        scanf("%d",&vetorB[i]);
        }

    //soma
    printf("VETOR RESULTANTE: \n");
    for(i=0; i<n; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for(i=0; i<n; i++){
        printf("%d \n",vetorC[i]);
    }
    return 0;
}
