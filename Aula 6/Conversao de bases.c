#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, base2 = 0, base10, resto, aux = 1, potencia = 1;

    printf("digite o numero que deseja converter: ");
    scanf("%d", &numero);

    while(numero != 0){
        resto = numero % 2;
        numero = numero / 2;
        base2 += resto * aux;
        aux *= 10;
    }    
    printf("\n%d", base2);

     while (base2 != 0) {
        resto = base2 % 10;
        base2 = base2 / 10;
        base10 += resto * potencia;
        potencia = potencia * 2;
     }
    printf("\n%d", base10);
        
        
    return 0;

    }    