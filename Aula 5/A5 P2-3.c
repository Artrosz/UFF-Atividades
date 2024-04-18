#include <stdlib.h>
#include <stdio.h>

int main(){
int numero1, resultado, digitos = 0, soma, acumulo;

printf("\n Digite um numero: ");
scanf("%d", &numero1);



while (numero1 != -1){

acumulo = acumulo + numero1;
digitos++; 
resultado = numero1*2;




printf("\n O resultado eh: %d", resultado);

printf("\n Digite um numero: ");
scanf ("%d", &numero1);

}
printf("\n O numero de digitos foram:%d", digitos);
printf("A combinacao dos numeros selecionados eh: %d",acumulo);


return 0;
}