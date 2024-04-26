

// Questão 5

/*
Abstração:
10 numeros. 
qnts pares e impares, soma dos pares, 
media dos impares.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero[10], i, impar = 0, par = 0, somaPar = 0, mediaImpar = 0;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0){
            somaPar += numero[i];
            par++;
        }
        else
        {
            impar++;
            mediaImpar += numero[i];
        }
        
    }

    mediaImpar = mediaImpar / impar;

    printf("Numeros pares: %d\n", par);
    printf("Numeros impares: %d\n", impar);
    printf("A soma dos numeros pares: %d\n", somaPar);
    printf("A media dos numeros impares: %d\n", mediaImpar);

return 0;
}