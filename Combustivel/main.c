#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, Alcool, Gasolina, Diesel;

    Alcool = 0;
    Gasolina = 0;
    Diesel = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d",&codigo);

    while (codigo != 4){
        switch (codigo){
        case 1 :
            Alcool++;
        break;

        case 2 :
            Gasolina++;
        break;

        case 3 :
            Diesel++;
        break;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d",&codigo);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d \n",Alcool);
    printf("Gasolina: %d \n",Gasolina);
    printf("Diesel: %d \n",Diesel);



    return 0;
}
