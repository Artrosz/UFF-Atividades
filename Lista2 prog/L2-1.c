#include <stdio.h>
#include <stdlib.h>

int main (){
float numero, dobro;

printf("Digite um numero: ");
scanf("%f", &numero);

while (numero != -1)
{
dobro = numero * 2;
printf("Dobro: %.2f\n", dobro);
printf("Digite um numero: ");
scanf("%f", &numero);
}

printf("Numero invalido, inoperando sistema...");

return 0;
}