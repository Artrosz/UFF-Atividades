#include <stdio.h>
#include <stdlib.h>

int main (){
float numero, dobro, acumulo = 0, soma; 
int contador = 0;

printf("Digite um numero: ");
scanf("%f", &numero);

while (numero != -1)
{
dobro = numero * 2;
soma = acumulo + dobro;
acumulo = soma;
contador++;
printf("Dobro: %.2f\n", dobro);
printf("Digite um numero: ");
scanf("%f", &numero);
}

printf("\nNumero invalido, inoperando sistema... \nForam digitados %d numeros\n", contador);
printf("O acumolo de dobros foi: %.2f\n", soma);

return 0;
}