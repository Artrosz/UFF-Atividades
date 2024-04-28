#include <stdio.h>

int main() {
    int numero, base10 = 0, resto, potencia = 1;

    printf("Digite o numero que deseja converter: ");
    scanf("%d", &numero);
    while (numero != 0) {
        resto = numero % 10;
        numero = numero / 10;
        base10 += resto * potencia;
        potencia *= 2;
    }
    printf("O numero em decimal: %d\n", base10);
    return 0;
}