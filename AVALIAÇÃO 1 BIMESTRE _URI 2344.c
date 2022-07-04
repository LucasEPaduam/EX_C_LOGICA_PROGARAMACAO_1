#include <stdio.h>

int main(){

   int nota = 0;
   char notachar;

    scanf ("%i", &nota);

    if (nota == 0){
        notachar = 'E';
    }else if (nota <= 35){
        notachar = 'D';
    }else if (nota <= 60) {
        notachar = 'C';
    }else if (nota <= 85) {
        notachar = 'B';
    }else{
        notachar = 'A';
    }
    printf (" %c\n", notachar);

    return 0;
}
