#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, decomposicao;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(numero >= 0)
    {
    decomposicao = numero % 10;
    printf("%d", decomposicao);
    numero = numero / 10;
    }

    return 0;
}