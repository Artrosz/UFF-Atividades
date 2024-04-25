// Data: 24/04/2024
/* Usando vetor, recebemos nota de alunos e irá printar a maior nota, a menor nota, calcular e printar a media
 e mostrar quantos alunos irão para a vs.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
    
    float notas [3], maior = 0, soma = 0, menor, media;
    int i = 0, j = 0, contador = 0; 

    for (i = 0; i < 3; i++){
        printf("\nDigite um numero: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
        if ((5.9 >= notas[i]) && (notas[i] >= 4)){
            contador ++;
        }
    }
    printf("\nA quantidade de alunos que foram pra vs sao: %d", contador);
    
    media = soma / i;
    printf("\nA media eh: %.2f", media);

    for (j = 0; j < 3; j++){
        if (notas [j] > maior){
        maior = notas[j];
        }
    }
        printf("\nMaior  valor: %.2f", maior);

    for (j = 0; j < 3; j++){
        menor = maior;
        if (notas [j] < menor){
        menor = notas[j];

        }
    }
        printf("\nMenor  valor: %.2f", menor);

    
    return 0;
}