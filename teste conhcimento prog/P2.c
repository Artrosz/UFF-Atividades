#include <stdio.h>
#include <stdlib.h>

int main(){
    int saque, nota50 = 0, nota20 = 0, nota10 = 0,
     nota5 = 0, nota2 = 0, moeda1 = 0;

    printf("digite o valor do saque: ");
    scanf("%d", &saque);

   while(saque > 0 && saque >= 50)
    {
        saque = saque - 50;
        nota50 = nota50 + 1;
    }
    
    while(saque > 0 && saque >= 20)
    {
        saque = saque - 20;
        nota20 = nota20 + 1;
    }
    while(saque > 0 && saque >= 10)
    {
        saque = saque - 10;
        nota10 = nota10 + 1;
    }
    while(saque > 0 && saque >= 5)
    {
        saque = saque - 5;
        nota5 = nota5 + 1;
    }
    while(saque > 0 && saque >= 2)
    {
        saque = saque - 2;
        nota2 = nota2 + 1;
    }
    while(saque > 0 && saque >= 1)
    {
        saque = saque - 1;
        moeda1 = moeda1 + 1;
    }
    
    printf("%d de 50 Reais, %d de 20 Reais, %d de 10 Reais, %d de 5 Reais, %d de 2 Reais, %d de 1 Real", nota50, nota20, nota10, nota5, nota2, moeda1);



return 0;

}
