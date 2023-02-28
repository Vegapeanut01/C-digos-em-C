#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma, cont;
    double media;

    printf("Digite as idades:\n ");
    scanf("%d",&x);

    soma = 0;
    cont = 0;
    while ( x >= 0){

            soma = soma+x;
            cont = cont + 1;
            scanf("%d",&x);
        }
    if (cont == 0){
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else{
        media = (double)soma / cont;
        printf("MEDIA = %.2lf\n",media);
    }





    return 0;
}
