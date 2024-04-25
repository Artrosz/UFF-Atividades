// Data: 24/04/2024
// Usando vetor, recebemos nota de alunos, e verificar quem vai pra vs.

#include <stdlib.h>
#include <stdio.h>

int main (){
    float notas [3], maior = 0, soma = 0, media;
    int i = 0, j = 0, contador = 0; 

    for (i = 0; i < 3; i++){
        printf("\nDigite um numero: ");
        scanf("%f", &notas[i]);
        if ((5.9 >= notas[i]) && (notas[i] >= 4)){
            contador ++;
        }
    }
    printf("\nA quantidade de alunos que foram pra vs sao: %d", contador);

    return 0;
}