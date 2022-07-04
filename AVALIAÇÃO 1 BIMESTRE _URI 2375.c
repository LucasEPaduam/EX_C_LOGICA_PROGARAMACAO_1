#include <stdio.h>

int main() {

    int bola, altura, largura, profundidade;

    scanf ("%i", &bola);
    scanf ("%i", &altura);
    scanf ("%i", &largura);
    scanf ("%i", &profundidade);

    if (bola <= altura && bola <= largura && bola <= profundidade){
        printf ("S\n");
    }else{
        printf ("N\n");
    }

    return 0;
}
