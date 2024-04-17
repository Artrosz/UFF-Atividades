#include <stdlib.h>
#include <stdio.h>

int main(){
    int contador = 0, quatro = 4, tabuada;

    while(contador <= 10){
        tabuada = contador * quatro;
        printf("%d\n", tabuada);
        contador++;
    }

    return 0;
}