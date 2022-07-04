#include <stdio.h>

int main (){

    int usernumber, result, rest;

    printf("INFORME UM NUMERO: ");
    scanf ("%i", &usernumber);

    result = usernumber / 2;
    rest = usernumber % 2;

    if (rest == 0){
        printf ("SEU NUMERO E PAR");
    }else{
        printf ("SEU NUMERO E IMPAR");

    }

return 0;


}
