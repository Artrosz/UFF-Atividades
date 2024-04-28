// Data: 22/04/2024
/* 
Converter de base decimal para base binária, depois automáticamente voltar para o numero inicial na base decimal
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, base2 = 0, resto, aux = 1;

    printf("digite o numero que deseja converter: ");
    scanf("%d", &numero);

    while(numero != 0){
        resto = numero % 2;
        numero = numero / 2;
        base2 += resto * aux;
        aux *= 10;
    }    
    printf("\nBinario: %d", base2);
    
    
    return 0;

    }
