#include <stdio.h>
#include <stdlib.h>

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
    int i,n;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d",&n);

    char nomes[n][50];
    double nota1[n];
    double nota2[n];

    for(i=0; i<n; i++){
        printf("Digite nome, primeira e segunda nota do %do aluno: \n", i+1);
        limpar_entrada();
        ler_texto(nomes[i], 50);
        scanf("%lf",&nota1[i]);
        scanf("%lf",&nota2[i]);
    }

    printf("Alunos aprovados: \n");
    for(i=0; i<n; i++){
      media = (nota1[i] + nota2[i]) / 2;
      if (media >= 6.00){
        printf("%s \n", nomes[i]);
      }
    }

    return 0;
}
