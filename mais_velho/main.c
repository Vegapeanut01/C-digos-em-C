#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, MaisVelho, maior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d",&n);

    int idades[n];
    char nomes[n][50];

    for(i=0; i<n; i++){
        printf("Dados da %da pessoa: \n",i+1);
        printf("Nome: ");
        scanf("%s",&nomes[i]);
        printf("Idade: ");
        scanf("%d",&idades[i]);
    }

    MaisVelho = idades[0];
    maior = 0;
    for(i=0; i<n; i++){
        if(idades[i] > MaisVelho){
            MaisVelho = idades[i];
            maior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s", nomes[maior]);
    return 0;
}
