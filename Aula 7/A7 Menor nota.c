// Data: 24/04/2024
/* Usando vetor, recebemos nota de alunos e irá printar a maior nota, a menor nota, calcular e printar a media
 e mostrar quantos alunos irão para a vs.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
    
   int menor = 100, i = 0, notas[3]; 

    for (i = 0; i < 3; i++){
    printf("Digita: ");
    scanf("%d", &notas[i]);
        if (notas [i] < menor){
            menor = notas[i];

        }
    }
    printf("\nMenor  valor: %d", menor);

    
    return 0;
}