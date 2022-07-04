#include <stdio.h>

int main (){

    int usernumber, contador, fatorial;

    scanf ("%i", &usernumber);

    contador = usernumber;
    fatorial = 1;

    for (contador; contador >= 1; contador--){

        fatorial = fatorial * contador ;
    }
        printf ("%i", fatorial);

return 0;
}
