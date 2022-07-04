#include <stdio.h>

int main() {

   int time, velocidade;
   double calculo;
   double km_l;

    scanf ("%d", &time);
    scanf ("%d", &velocidade);

    calculo = (time * (double)velocidade) / 12;

    km_l = calculo;

    printf ("%.3lf\n", km_l);


    return 0;
}
