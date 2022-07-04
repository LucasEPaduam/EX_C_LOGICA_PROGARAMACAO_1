#include <stdio.h>

int main ( ){

    int linhaa, linhab, linhac, cont, usernumber;

    linhaa = 1;
    linhab = 2;
    linhac = 3;
    cont = 0;
    usernumber = 0;

    scanf ("%i", &usernumber);
    for (cont; cont < usernumber; cont++)
    {
        printf ("%i %i %i PUM\n", linhaa, linhab, linhac);
        linhaa+=4;
        linhab+=4;
        linhac+=4;
    }


return 0;

}


