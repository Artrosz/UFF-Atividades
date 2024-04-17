#include <stdlib.h>
#include <stdio.h>

int main(){
int numero1, resultado, digitos = 0, soma, contador;

printf("\n Digite um numero: ");
scanf("%d", &numero1);

while (numero1 != -1){

digitos++; 
resultado = numero1*2;
soma = numero1 + contador;
contador = numero1;


printf("\n O resultado eh: %d", resultado);

printf("\n Digite um numero: ");
scanf ("%d", &numero1);

}
printf("\n O numero de digitos foram:%d", digitos);


return 0;
}