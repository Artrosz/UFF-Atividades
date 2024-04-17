#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero1, numero2, resultado;

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("\n Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1*numero2;

    printf("\n O resultado eh: %d", resultado);

    return 0;
}