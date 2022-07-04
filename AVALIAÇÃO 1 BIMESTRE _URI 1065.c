#include <stdio.h>

int main() {

    int cont = 0, usernumber = 0, pares = 0;

    for (cont; cont < 5; cont++){
            scanf ("%i", &usernumber);
                if (usernumber % 2 == 0){
                pares = pares + 1;
            }
    }
        printf ("%i valores pares", pares);


    return 0;

    }
