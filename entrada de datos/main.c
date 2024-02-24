#include <stdio.h>

int main (void){
    //Prueba de incremento a una variable char se desplaza en los valores ascii
    char c;
    c = getchar();
    printf("%d %c", c, c);

    c++;
    printf("%d", c);

    return 0;
}