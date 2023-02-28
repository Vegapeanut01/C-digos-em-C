#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Digite dois  numeros:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    while (x != y){
        if(x < y){
            printf("CRESCENTE!\n");
        }
        else{
            printf("DESCRESCENTE!\n");
        }
        printf("\nDigite dois  numeros:\n");
        scanf("%d",&x);
        scanf("%d",&y);
    }

    return 0;
}
