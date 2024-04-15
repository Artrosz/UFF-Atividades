#include <stdio.h>
#include <stdlib.h>

int main (){
    system("chcp 1252 > nul");
    int  prestacao;
    float entrada, valor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    prestacao = valor / 3;
    entrada = valor - 2 * prestacao;

    printf("Entrada: %.2f\nPrestacoes %d", entrada, prestacao);

    return 0;
}