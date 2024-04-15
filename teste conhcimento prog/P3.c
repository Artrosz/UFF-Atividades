#include <stdio.h>
#include <stdlib.h>

int main (){
float numero, parteDecimal;
int numeroInt;

printf("Digite um numero do conjunto dos numeros inteiros (utilize '.' para separar a parte decimal da inteira)");
scanf("%f", &numero);

numeroInt = numero;
parteDecimal = numero - numeroInt;
if (parteDecimal >= 0.5){
    numeroInt++;
    printf("%d", numeroInt);
}
else {
    printf("%d", numeroInt);
}


return 0;
}