#include <stdio.h>

int main(){

    float media, idades, cont, soma;

    soma = 0;
    cont = 0;
    media = 0;
    idades = 0;

    while (idades >= 0){
        scanf ("%f", &idades);
         if (idades < 0) {break;
         }else{
        soma = idades + soma;
        cont++;}
        }

        printf ("%.2f\n", soma / cont);

return 0;

}
