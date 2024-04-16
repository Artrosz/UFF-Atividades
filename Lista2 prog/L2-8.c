#include <stdlib.h>
#include <stdio.h>

int main (){
    int numero, contador = 2, detector = 0, aux;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while(contador < numero){

    if(numero % contador == 0){
        detector++;
    } 
    contador++;

    }

    if(detector != 0){
        printf("%d Nao eh um numero primo", numero);
    }

    else{
        printf("%d Eh um numero primo", numero);        
    }

    return 0;
}