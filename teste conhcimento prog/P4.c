#include <stdio.h>

int main (){
    int numero, contador = 0;
    scanf("%d", &numero);

    while (numero > 0){
        numero = numero / 10;
        contador++;
    }
    printf("%d", contador);

}