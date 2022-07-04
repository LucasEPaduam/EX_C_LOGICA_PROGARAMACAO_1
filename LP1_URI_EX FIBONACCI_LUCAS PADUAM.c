#include <stdio.h>

int main (){

    int usernumber, cont, auxA, auxB, auxC;

    cont = 1;
    auxA = 0;
    auxB = 1;
    auxC = 0;

    scanf ("%i", &usernumber);
    for (cont; cont < usernumber; cont++){

        if (cont%2 == 1){
            printf ("%i ", auxC);
            auxC = auxA + auxB;
            auxA = auxC;
        }else if (cont == 2){
            printf ("%i ", auxC);
        }else if (cont % 2 == 0){
            printf ("%i ", auxC);
            auxC = auxA + auxB;
            auxB = auxC;
        }

    }

        printf ("%i\n", auxC);

return 0;
}
