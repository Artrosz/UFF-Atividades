#include <stdlib.h>
#include <stdio.h>

//Indicar o fatorial de um número

int main (){

    int numero, fatoracao, aux;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    aux = numero - 1;

    while(aux > 1){
        fatoracao = numero * aux;
        numero = fatoracao;
        aux--;         
    }

    printf("O fatorial do numero escolhido eh %d", fatoracao);

    return 0;
}