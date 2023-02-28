#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char * buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    int HorasTrabalhadas;
    double ValorHora, pagamento;

    printf("Nome: ");
    limpar_entrada;
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf",&ValorHora);
    printf("Horas trabalhadas: ");
    scanf("%d",&HorasTrabalhadas);

    pagamento = ValorHora * HorasTrabalhadas;

    printf("O pagamento para %s deve ser de %.2lf", nome,pagamento);


    return 0;
}
