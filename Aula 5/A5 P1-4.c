#include <stdlib.h>
#include <stdio.h>

int main(){
float numero1, resultado;

printf("\n Digite um numero: ");
 scanf("%f", &numero1);
 
resultado = numero1/0.2;
printf("\n O resultado eh: %.0f", resultado);

return  0;
}