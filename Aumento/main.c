#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, NovoSalario, aumento, porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf",&salario);

    if( salario <= 1000.00){
        porcentagem = 20.0;
    }
    else if (salario <= 3000.00){
        porcentagem = 15.0;
    }
    else if (salario <= 8000.00 ){
        porcentagem = 10.0;
    }
    else {
        porcentagem = 5.0;
    }

    aumento = salario * porcentagem / 100;
    NovoSalario = salario + aumento;

    printf("Novo salario: R$%.2lf", NovoSalario);
    printf("\nAumento : R$%.2lf", aumento);
    printf("\nPorcentagem = %.0lf%%", porcentagem);

    return 0;
}
