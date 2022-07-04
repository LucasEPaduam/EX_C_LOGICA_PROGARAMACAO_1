#include <stdio.h>

int main ( ){

    float pedidocliente, quantidade, cod1, cod2, cod3, cod4, cod5, result1;

    printf("INFORME O CÓDIGO DO SEU PEDIDO: ");
    scanf ("%f", &pedidocliente);
    printf("INFORME A QUANTIDADE DESEJADA: ");
    scanf ("%f", &quantidade);

    cod1 = 4.00;
    cod2 = 4.50;
    cod3 = 5.00;
    cod4 = 2.00;
    cod5 = 1.50;

    if (pedidocliente == 1){
            printf ("VALOR TOTAL R$: %.2f\n",cod1*quantidade);
    }else if (pedidocliente == 2){
            printf ("VALOR TOTAL R$: %.2f\n",cod2*quantidade);
    }else if (pedidocliente == 3){
            printf ("VALOR TOTAL R$: %.2f\n",cod3*quantidade);
    }else if (pedidocliente == 4){
            printf ("VALOR TOTAL R$: %.2f\n",cod4*quantidade);
    }else if (pedidocliente == 5){
            printf ("VALOR TOTAL R$: %.2f\n",cod5*quantidade);
    }

return 0;

}









