#include <stdio.h>
#include <stdlib.h>

int main (){
int contador = 0, numero, dobro, soma, acumulo = 0; 

printf("Digite um numero: ");
scanf("%d", &numero);

while (numero != -1)
{

if (numero % 2 == 0){
    printf("\n%d Eh par", numero);
}
else{
    printf("\n%d Eh impar", numero);
}
dobro = numero * 2;
soma = acumulo + dobro;
acumulo = soma;
contador++;
printf("\nDobro: %d\n", dobro);

printf("\nDigite um numero: ");
scanf("%d", &numero);


}

printf("Numero invalido, inoperando sistema... \nForam digitados %d numeros\n", contador);
printf("\nO acumolo de dobros foi: %d\n", soma);

return 0;
}