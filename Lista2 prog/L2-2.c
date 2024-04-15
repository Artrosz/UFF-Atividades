#include <stdio.h>
#include <stdlib.h>

int main (){
float numero, dobro; 
int contador = 0;

printf("Digite um numero: ");
scanf("%f", &numero);

while (numero != -1)
{
dobro = numero * 2;
printf("Dobro: %.2f\n", dobro);
contador++;
printf("Digite um numero: ");
scanf("%f", &numero);
}

printf("Numero invalido, inoperando sistema... \nForam digitados %d numeros", contador);

return 0;
}