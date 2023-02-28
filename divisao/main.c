#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double x ,y ,divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Entre com o numerador: ");
        scanf("%lf",&x);
        printf("Entre com o denominador: ");
        scanf("%lf",&y);

        if( y== 0){
            printf("DIVISAO IMPOSSIVEL\n");
        }
        else{
            divisao = x/y;
            printf("DIVISAO = %.2lf \n", divisao);
        }
    }

    return 0;
}
