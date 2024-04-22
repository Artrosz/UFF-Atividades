
/*22/04/2024
Calcula sua idade*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int  dataA, dataN, datajuliana;
printf("\n Digite a data atual: (aaaammdd)");
scanf ("%d", &dataA);
printf ("\n Digite sua data de nascimento: (aaaammdd)");
scanf("%d", &dataN);

datajuliana = (dataA - dataN) / 10000;
printf ("%d", datajuliana);


return 0;
}