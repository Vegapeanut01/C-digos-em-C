#include <stdio.h>
#include <string.h>
void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, i, menores;
    double alturatotal, alturamedia, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes [N][50];
    int idades[N];
    double alturas [N];

    for(i=0; i<N; i++){
        printf("Dados da %da pessoa: \n",i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf",&alturas[i]);
    }

    alturatotal = 0;
    for (i=0; i<N; i++){
        alturatotal = alturatotal + alturas[i];
    }
    alturamedia = alturatotal / N;
    printf("\n\nAltura media: %.2lf\n",alturamedia);

    menores = 0;
    for(i=0; i<N; i++){
        if (idades[i] < 16){
            menores = menores + 1;
        }
    }
    percentualMenores = menores * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    for(i=0; i<N; i++){
        if (idades[i] <16){
            printf("%s \n", nomes[i]);
        }
    }

    return 0;

}
