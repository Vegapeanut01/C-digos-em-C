#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b ,c, Aquadrado, Atringulo, Atrapezio;

    printf("Digite a medida A: ");
    scanf("%lf",&a);
    printf("Digite a medida B: ");
    scanf("%lf",&b);
    printf("Digite a medida C: ");
    scanf("%lf",&c);

    Aquadrado = a * a;
    Atringulo = (a*b) / 2.0;
    Atrapezio =  (a+b) * c / 2.0;

    printf("AREA DO QUADRADO = %.4lf \n",Aquadrado);
    printf("AREA DO TRIANGULO = %.4lf \n",Atringulo);
    printf("AREA DO TRAPEZIO = %.4lf \n",Atrapezio);


    return 0;
}
