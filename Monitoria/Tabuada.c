#include <stdio.h>

int main ()
{
    int numero;

    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", numero * i);
    }
    
    return 0;
}