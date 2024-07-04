#include <stdio.h>
#include "./../stdc/stdc.h"
int main(){
    char * cadena = "Hola soy una cadena";
    //Esto es válido porque se inicializó con el contenido de la cadena
    char * cadena1;
    cadena1 = "hola";//Esto teóricamente ya no es válido
    return 0;
}