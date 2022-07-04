#include <stdio.h>

int main (){

    int usernumber;

    printf("INFORME UM NUMERO: ");
    scanf ("%i", &usernumber);

    if (usernumber < 0){
        printf ("SEU NUMERO E NEGATIVO");
    }else if (usernumber == 0){
        printf ("SEU NUMERO E NULO");
    }else{
        printf ("SEU NUMERO E POSITIVO");
    }

return 0;


}
