#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf",&glicose);

    if( glicose <= 100){
        printf("Classificacao : normal");
    }
    else if(glicose <= 140.00){
        printf("Classificacao : elevado");
    }
    else{
        printf("Classificacao : diabetes");
    }


    return 0;
}
