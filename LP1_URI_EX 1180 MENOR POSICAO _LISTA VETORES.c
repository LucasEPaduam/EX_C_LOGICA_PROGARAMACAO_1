#include <stdio.h>

int main (){

    int Nvetor;
    int cont, menorvalor, posicao;

    scanf ("%d", &Nvetor);

    int vetor[Nvetor];

    scanf ("%d", &vetor[0]);
    menorvalor = vetor[0];
    posicao = 0;

    for (cont = 1; cont < Nvetor; cont++){

        scanf ("%d", &vetor[cont]);

            if (menorvalor > vetor[cont]){

                menorvalor = vetor[cont];
                posicao = cont;
            }

        }

        printf ("Menor valor: %d\n", menorvalor);
        printf ("Posicao: %d\n", posicao);



return 0;

}
