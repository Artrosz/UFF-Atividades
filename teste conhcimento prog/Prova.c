#include <stdio.h>
#include <stdlib.h>
int main() {
    int i = 1;
        while ( i <= 20 ){
            if ( i == 2 ) continue;
            if ( i == 5 ) break;
            printf("i = %d\n",i);
            i++;
        }
return 0;
}