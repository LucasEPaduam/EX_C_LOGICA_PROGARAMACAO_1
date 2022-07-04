#include <stdio.h>

int main() {

    int cases, eachcase, cont;
    unsigned long long int vetor [61];

    vetor[0] = 0;
    vetor[1] = 1;

    for (cont = 2; cont <= 60; cont++){
        vetor [cont] = vetor [cont - 1] + vetor [cont - 2];
    }
    scanf ("%d", &cases);
    for (cont = 1; cont <= cases; cont++){
        scanf ("%d", &eachcase);
        printf ("Fib(%d) = %llu\n", eachcase, vetor [eachcase]);


    }

	return 0;
}
