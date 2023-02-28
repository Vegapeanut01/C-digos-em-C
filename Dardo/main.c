#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, maior;

    printf("Digite as tres distancias: \n ");
    scanf("%lf %lf %lf",&A, &B, &C);

    if(A > B && A > C){
        maior = A;
    }
    else if( B > A && B > C){
        maior = B;
    }
    else{
        maior = C;
    }

    printf("MAIOR DISTANCIA: %.2lf", maior);


    return 0;
}
