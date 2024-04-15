#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero, divisores = 0, contador = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (contador <= numero){
        if (numero % contador == 0)
        {
            divisores++;
        }

         contador++;
    }

    printf("%d tem %d divisores\n", numero, divisores);
    
    return 0;
}