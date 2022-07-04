#include <stdio.h>

int main (){

    int quantBife, quantMassa, quantFrango, clientBife, clientMassa, clientFrango;
    int faltBife, faltMassa, faltFrango;

    scanf ("%i", &quantBife);
    scanf ("%i", &quantMassa);
    scanf ("%i", &quantFrango);
    scanf ("%i", &clientBife);
    scanf ("%i", &clientMassa);
    scanf ("%i", &clientFrango);

    if (quantBife < clientBife){
            faltBife = clientBife - quantBife;
    }else{
            faltBife = 0;

    }if (quantMassa < clientMassa){
            faltMassa = clientMassa - quantMassa;
    }else{
            faltMassa = 0;

    }if (quantFrango < clientFrango){
            faltFrango = clientFrango - quantFrango;
    }else{
            faltFrango = 0;
    }

    printf ("%i\n", faltBife + faltFrango + faltMassa);









    return 0;
}
