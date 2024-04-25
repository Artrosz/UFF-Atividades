// Data: 24/04/2024
// Usando vetor, recebemos nota de alunos e irá printar a maior nota.

#include <stdlib.h>
#include <stdio.h>

int main (){
    float notas [10], maior = 0;
    int i = 0, j = 0;

    for (i = 0; i < 10; i++){
        printf("\nDigite um numero: ");
        scanf("%f", &notas[i]);
    }

    for (j = 0; j < 10; j++){
        if (notas [j] > maior){
        maior = notas[j];
        }
    }
    
    printf("%.2f", maior);

    return 0;
}