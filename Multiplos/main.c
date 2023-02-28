#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;

    printf("Digite dois numeros inteiro: \n");
    scanf("%d %d",&A,&B);

    if(A % B == 0 || B % A == 0){
        printf("Sao multiplos");
    }
    else{
        printf("Nao sao multiplos");
    }


    return 0;
}
