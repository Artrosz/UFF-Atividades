#include <stdio.h>
#include <stdlib.h>

int main(){

int anoN, mesN, diaN, anoA, mesA, diaA, ano, mes, dia;
    printf("Digite sua data de nascimento (dd,mm,aaaa): ");
    scanf("%d,%d,%d", &diaN, &mesN, &anoN);

    printf("Digite a data atual (dd,mm,aaaa): ");
    scanf("%d,%d,%d", &diaA, &mesA, &anoA);


    if(mesN > mesA && diaA < diaN){
        dia = diaN - diaA;
        ano = (anoA - anoN) - 1;
        mes = (mesN - mesA) + 1;
    }
    else if(mesN < mesA && dia){
        ano = anoA - anoN;
        mes = (mesN - mesA) + 1;
        
    }

    printf("%d, %d, %d,", dia, mes, ano);

    return 0;
}