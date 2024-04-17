#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero1, numero2, contador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &numero2);
    
    contador = numero1;


    if (numero1 < numero2){
    while(contador <= numero2){
     
        printf("%d\n", contador);
        contador = contador + 1;

    }
    }
    else {
     while(contador >= numero2){
     
        printf("%d\n", contador);
        contador = contador - 1;

    }   
    }


    return 0;
}