#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, x, i, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&N);

    dentro = 0;
    fora = 0;

    for(i=0; i<N; i++){
        printf("Digite um numero: ");
        scanf("%d",&x);

        if(x <10 || x > 20){
            fora++;
        }
        else{
            dentro++;
        }
    }

    printf("%d DENTRO \n", dentro);
    printf("%d FORA \n", fora);


    return 0;
}
