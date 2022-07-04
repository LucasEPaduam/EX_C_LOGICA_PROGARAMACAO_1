#include <stdio.h>

int main (  ){

    int minFinal, minBrinq1, minBrinq2;

    scanf ("%i", &minFinal);
    scanf ("%i", &minBrinq1);
    scanf ("%i", &minBrinq2);

    if (minFinal > (minBrinq1 + minBrinq2)){
            printf ("Farei hoje!\n");

    }else{
            printf ("Deixa para amanha!\n");
    }
return 0;
}
