#include <stdlib.h>
#include <stdio.h>

int main(){
int numero1, resultado;
 
printf ("\n Digite um numero:");
scanf("%d",&numero1);

while(numero1 != -1){
    
resultado = numero1*2;

printf ("\n O resultado eh: %d", resultado);

printf ("\n Digite um numero:");
scanf("%d",&numero1);

}


    return 0;
}