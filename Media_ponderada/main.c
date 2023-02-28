#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double A, B, C, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d",&n);

    for(i= 0; i<n; i++){
       printf("Digite tres numeros: \n");
       scanf("%lf %lf %lf",&A,&B,&C);

       media = (A * 2 + B * 3 + C *5) / 10.0;

       printf("MEDIA = %.1lf \n",media);
    }


    return 0;
}
