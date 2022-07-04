#include <stdio.h>

int main (){

    float number1, number2, number3, number4, number5, number6, totalpositivo;

    scanf ("%f", &number1);
    scanf ("%f", &number2);
    scanf ("%f", &number3);
    scanf ("%f", &number4);
    scanf ("%f", &number5);
    scanf ("%f", &number6);

    if (number1 < 0){
        number1 = 0;
    }else{
        number1 = 1;
    }
    if (number2 < 0){
        number2 = 0;
    }else{
        number2 = 1;
    }
    if (number3 < 0){
        number3 = 0;
    }else{
        number3 = 1;
    }
    if (number4 < 0){
        number4 = 0;
    }else{
        number4 = 1;
    }
    if (number5 < 0){
        number5 = 0;
    }else{
        number5 = 1;
    }
    if (number6 < 0){
        number6 = 0;
    }else{
        number6 = 1;
    }

    totalpositivo = number1 + number2 + number3 + number4 + number5 + number6;

    printf ("%.0f valores positivos\n", totalpositivo);


return 0;
}
