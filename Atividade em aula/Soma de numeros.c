#include <stdlib.h>
#include <stdio.h>

int main(){
    int acumulador = 0, numero, segue = 1;
    
    while(segue == 1){
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    acumulador = numero + acumulador;     

    printf("\nTotal: %d", acumulador);


    printf("\nDeseja continuar? (1)Sim / (0)Nao\n");
    scanf("%d", &segue);
    }

    printf("\nO programa encerrou.");

    return 0;
}