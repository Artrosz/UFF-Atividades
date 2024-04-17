#include <stdlib.h>
#include <stdio.h>
 
int main(){
int numero1, contador = 0, tabuada;

printf("\n Digite o numero: ");
scanf("%d", &numero1);

 while (contador<=10){
 tabuada = numero1*contador;
 printf("\n%d * %d = %d", numero1, contador, tabuada);
 contador++;
 }

return 0;
}