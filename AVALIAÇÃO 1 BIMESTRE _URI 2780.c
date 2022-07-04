#include <stdio.h>

int main() {

    int distancia, cesta_de;

    scanf ("%i", &distancia);

    if (distancia <= 800){
        cesta_de = 1;
    }else if (distancia > 800 && distancia <= 1400){
        cesta_de = 2;
    }else{
        cesta_de = 3;
    }

        printf ("%i\n", cesta_de);

        return 0;
}
