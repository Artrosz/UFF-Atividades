/*
Questão 1
Abstração:
Determinar quantos alunos e as notas, qual a maior,
menor, media, e quantos tiraram mais que 6.
*/ 
/*
Checklist
-maior-
-menor-
-maiorQue6-
-menorQue6-
-media-
*/
#include <stdlib.h>
#include <stdio.h>

int main (){
    float notas[5], media, maior = 0, menor;
    int i = 0, menorQue6 = 0, maiorQue6 = 0;
    

    for(i = 0; i < 5; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        media += notas[i];

        if(notas[i] > maior){
            maior = notas[i];
            menor = maior;
        }

        if(notas[i] < menor){
            menor = notas[i];
        }
        
        if(notas[i] > 6){
            maiorQue6++;
        }

        if(notas[i] < 6){
            menorQue6++;
        }
    }

    media = media / i;

    printf("\nA maior nota da turma foi: %.2f", maior);
    printf("\nA menor nota da turma foi: %.2f", menor);
    printf("\nA media da turma toda foi de: %.2f", media);
    printf("\nA quantidade de alunos que tiraram menos que 6 foi de: %d", menorQue6);
    printf("\nA quantidade de alunos que tiraram mais que 6 foi de: %d", maiorQue6);



    return 0;
}