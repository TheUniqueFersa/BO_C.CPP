#include <stdio.h>

#include "./../stdc/stdc.h"
#include "listasDoblementeLigadas.h"

//Inicializar lista
void solicitarUsuario(){
    char * buffer;

    buffer = malloc(sizeof(char)*MAX_STRING);
    
    Usuario u;
    printf("Ingrese el nombre del usuario");
    leerCadena(buffer, MAX_STRING, true, DEFAULT);
    u.nombre = malloc(sizeof(char)*strlen(buffer));
    strcpy(u.nombre, buffer);
    printf("Ingrese su edad");
    u.edad = leerEntero("Ingrese su edad: ", DEFAULT);

    

    
    
    // while(buffer)
    // printf("");
    
}
Lista iniciarLista(){
    //Hace lectura de archivos binarios y regresaría la info guardada... #TODO
    // if(archivo no está vacío, crear lista con dichos usuarios guardados, sino:)
    int i=1;
    char conf;
    do{
        printf("Deseas añadir más usuarios? (Y/N): ");
        i++;
        do{
            printf("Deseas añadir más usuarios? (Y/N): ");
            conf = getchar();
            toupper(conf);
            if(conf != "Y" && conf != "N"){
                printf("--Opcion invalida\n");
            }
        }while(conf != "Y" && conf != "N");
    } while(conf == 'Y');
    Lista = 
    return 
}