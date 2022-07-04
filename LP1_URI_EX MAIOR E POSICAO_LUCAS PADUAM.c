#include <stdio.h>

int main() {

    int valores, maiorValor, posicao, contadorestrutura;

    contadorestrutura = 1;
    maiorValor = 0;

    for (contadorestrutura; contadorestrutura <= 3; contadorestrutura++)
    {
        scanf ("%i", &valores);
            if (contadorestrutura == 1){
                maiorValor = valores;
                posicao = contadorestrutura;
            }else
                {
                 if (maiorValor < valores){
                maiorValor = valores;
                posicao = contadorestrutura;
                 }
            }
    }
                printf ("%i\n%i\n", maiorValor, posicao);

    return 0;
}
