#include <stdio.h>

int main (){

    int usernumber, result, rest;

    printf("INFORME UM NUMERO: ");
    scanf ("%i", &usernumber);

    result = usernumber / 13;
    rest = usernumber % 13;

    switch (rest){
    case 0:
        printf ("SEU NUMERO E MULTIPLO DE 13");
        break;
    default:
        printf ("SEU NUMERO NAO E MULTIPLO DE 13");
        break;

    }

return 0;


}
