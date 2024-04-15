#include <stdio.h>
#include <stdlib.h>

int main (){
int contador = 0, numero, dobro, soma, acumulo = 0, impares = 0, pares = 0; 

printf("Digite um numero: ");
scanf("%d", &numero);




while (numero != -1)
{
dobro = numero * 2;
soma = acumulo + dobro;
acumulo = soma;
contador++;
if (numero % 2 == 0){
    printf("\n%d Eh par", numero);
    pares++;
}
else{
    printf("\n%d Eh impar", numero);
    impares++;
}

printf("\nDobro: %d\n", dobro);

printf("\nDigite um numero: ");
scanf("%d", &numero);


}

printf("\nNumero invalido, inoperando sistema... \nForam digitados %d numeros\n", contador);
printf("\nO acumolo de dobros foi: %d\n", soma);
printf("\nO total de numeros impares digitados foram: %d\n", impares);
printf("O total de numeros pares digitdos foram: %d", pares);

return 0;
}