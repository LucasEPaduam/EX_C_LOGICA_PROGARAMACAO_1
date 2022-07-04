#include <stdio.h>

int main (){

    double quantXP, XPfinal;
    int multiplicadorXP;

    while (quantXP != 0 && multiplicadorXP !=0){

    scanf ("%lf" "%i", &quantXP, &multiplicadorXP);

        XPfinal = quantXP * multiplicadorXP;

        if (quantXP == 0 && multiplicadorXP ==0){

            break;

        }
            printf ("%.0lf\n", XPfinal);

    }

return 0;
}
