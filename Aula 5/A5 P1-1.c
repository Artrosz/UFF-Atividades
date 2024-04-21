#include <stdlib.h>
#include <stdio.h>
/*
Arthur  Rocha e Yasmin Heringer
Data de criação: 17/04/2024
Programa que lê um número inteiro e imprime o seu dobro. 
*/

int main(){
    //variaveis que serão usadas ao longo de programa.
    int numero, resultado;
    /*
    usuário digitará um número e esse número será 
    armazenado na variavel "numero".
    */
    printf("\n Digite um numero: ");
    scanf("%d", &numero);
    /*
    O número armazenado será multiplicado por 2
    e o produto será armazenado na variavel "resultado".
    */
    resultado = numero*2;
    /*
    Será impresso para o usuário, o dobro do número
    que ele escolheu.
    */
    printf("\n O resultado eh: %d", resultado);

    return 0;
}

