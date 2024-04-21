#include <stdlib.h>
#include <stdio.h>

/*
Arthur  Rocha e Yasmin Heringer
Data de criação: 17/04/2024
Programa que lê dois números inteiros e os multiplicam,
imprimindo o produto para o usuário.
*/

int main(){
//variaveis que serão usadas ao longo de programa.
    int numero1, numero2, resultado;

/*
usuário digitará um número e esse número será 
armazenado na variavel "numero1".
*/

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &numero1);

/*
usuário digitará um número e esse número será 
armazenado na variavel "numero2".
*/

    printf("\n Digite o segundo numero: ");
    scanf("%d", &numero2);

/*
A varavel "resultado" receberá o produto da multiplicação
entre os valores das variaveis "numero1" e "numero2".
*/

    resultado = numero1*numero2;

/*
Será impresso pro usuário o valor armazenado na variavel
"resultado".
*/

    printf("\n O resultado eh: %d", resultado);

    return 0;
}