
// Questão 6
/*
Abstração:
1 bondinho, X alunos e Y monitores, X e Y 
serão definidos pelo usuário. Só pode 50 pessoas
por vez no bondinho, com a quantidade dita pelo usuário
dá pra levar todos numa viajem só?
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int alunos, monitores, total;

    printf("Quantidade de alunos: ");
    scanf("%d", &alunos);

    printf("Quantidade de monitores: ");
    scanf("%d", &monitores);

    total = alunos + monitores;

    if (total<= 50 && total >= 1 ){
        printf("Podem ser feita apenas uma viagem");
    }
    else
    {
        printf("Precisarao mais que uma viagem");
    }
    
    return 0;
}