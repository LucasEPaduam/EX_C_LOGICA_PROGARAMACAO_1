#include <stdio.h>

int main (){

    int consumo, total, taxa, totalfaixa100;

    taxa = 7;

    scanf ("%i", &consumo);

    if (consumo <= 10){
           printf ("%i\n", taxa);

    }else if ((consumo >= 11) && (consumo <= 30)){
            total = taxa + consumo - 10 * 1;
            printf ("%i\n", total);
    }
    else if ((consumo >= 31) && (consumo <= 100)){
            total = (consumo - 30) * 2 + 27;
            printf ("%i\n", total);
    }
    else {
            total = (consumo - 100) * 5 + 167;
            printf ("%i\n", total);
    }




return 0;
}
