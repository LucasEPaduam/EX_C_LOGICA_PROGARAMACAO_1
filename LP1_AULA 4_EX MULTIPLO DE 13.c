#include <stdio.h>

int main (){

    int usernumber, result, rest;

    printf("INFORME UM NUMERO: ");
    scanf ("%i", &usernumber);

    result = usernumber / 13;
    rest = usernumber % 13;

    if (rest == 0){
        printf ("SEU NUMERO E MULTIPLO DE 13");
    }else{
        printf ("SEU NUMERO NAO E MULTIPLO DE 13");

    }

return 0;


}
