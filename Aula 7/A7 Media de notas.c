// Data: 24/04/2024
// Usando vetor, recebemos nota de alunos e irá printar a maior nota e calcular e printar a media.

#include <stdlib.h>
#include <stdio.h>

int main (){
    
    float notas [3], maior = 0, soma = 0, media;
    int i = 0, j = 0; 

    for (i = 0; i < 3; i++){
        printf("\nDigite um numero: ");
        scanf("%f", &notas[i]);
        soma += notas[i];

    }
        media = soma / i;
         printf("\nA media eh: %.2f", media);

    for (j = 0; j < 3; j++){
        if (notas [j] > maior){
        maior = notas[j];
        }
    }
        printf("\nMaior  valor: %.2f", maior);

    return 0;
}