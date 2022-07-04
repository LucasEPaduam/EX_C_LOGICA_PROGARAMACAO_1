#include <stdio.h>

int main (){


    int totalcasos, qtdbichinhos = 0, totalbichinhos = 0, cont, coelho, rato, sapo;
    double percentcoelho = 0, percentrato = 0, percentsapo = 0;
    char tipobichinhos = 'd';


    cont = 0;
    coelho = 0;
    rato = 0;
    sapo = 0;

    scanf ("%i", &totalcasos);


    for (cont; totalcasos > cont; cont++){

        scanf ("%i %c", &qtdbichinhos, &tipobichinhos);

        if (tipobichinhos == 'C'){
            coelho = coelho + qtdbichinhos;}

        else if (tipobichinhos == 'R'){
            rato = rato + qtdbichinhos;}

        else if (tipobichinhos == 'S'){
            sapo = sapo + qtdbichinhos;}

    }
            totalbichinhos = (coelho + sapo + rato);
            percentcoelho = (coelho * 100.00) / totalbichinhos;
            percentrato = (rato * 100.00) / totalbichinhos;
            percentsapo = (sapo * 100.00) / totalbichinhos;


        printf ("Total: %i cobaias\n", totalbichinhos);
        printf ("Total de coelhos: %i\n", coelho);
        printf ("Total de ratos: %i\n", rato);
        printf ("Total de sapos: %i\n", sapo);
        printf ("Percentual de coelhos: %.2lf %%\n", percentcoelho);
        printf ("Percentual de ratos: %.2lf %%\n", percentrato);
        printf ("Percentual de sapos: %.2lf %%\n", percentsapo);

return 0;}
