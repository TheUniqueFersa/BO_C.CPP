#include <stdio.h>

#include "./../stdc/stdc.h"
#include "listasDoblementeLigadas.h"

typedef int MODO;
#define FRONT -1
// #define 
#define BACK 1

int listaVacia(Lista* l){
    return (l->h == NULL && l->t == NULL);
}
//Inicializar lista
Usuario solicitarUsuario(){
    char * buffer;
    buffer = malloc(sizeof(char)*MAX_STRING);
    
    Usuario u;
    printf("Ingrese el nombre del usuario: ");
    leerCadena(buffer, MAX_STRING, true, DEFAULT);
    u.nombre = malloc(sizeof(char)*strlen(buffer));
    strcpy(u.nombre, buffer);
    u.edad = leerEntero("Ingrese su edad: ", DEFAULT);

    free(buffer);
    return u;
}
Nodo *crearNodo(){
    //Hace lectura de archivos binarios y regresaría la info guardada... #TODO
    // if(archivo no está vacío, crear lista con dichos usuarios guardados, sino:)
    Nodo *n = (Nodo*)malloc(sizeof(Nodo)); //(Nodo*) ya no es necesario en las versiones más recientes de C
    (*n).user = solicitarUsuario();
    n->ant = n->sig = NULL;
    return n;
}
void añadirNodo(Lista* l, Nodo* n, MODO m){
    // Si la lista está vacía
    if(listaVacia(l)){
        l->h = n;
        l->t = n;

        n->ant = n->sig = NULL;
    } else {
        //Para BACK
        if(m > 0){
            n->ant = l->t;

            l->t->sig = n;
            l->t = n;
        } //Para FRONT
        else if(m < 0){
            n->sig = l->h;

            l->h->ant = n;
            l->h = n;
        }
    }
}
Lista* iniciarLista(){
    //Hace lectura de archivos binarios y regresaría la info guardada... #TODO
    // if(archivo no está vacío, crear lista con dichos usuarios guardados, sino:)
    int i=1;
    Lista* l = malloc(sizeof(Lista));
    char conf;
    do{
        añadirNodo(l, crearNodo(), BACK);
        do{
            printf("Deseas anadir mas usuarios? (Y/N): ");
            conf = getchar();
            if(toupper(conf) != 'Y' && toupper(conf) != 'N'){
                printf("--Opcion invalida\n");
            }
            if(conf == 'Y')
                i++;
        }while(conf != 'Y' && conf != 'N');
    } while(conf == 'Y');
    l->length = i;
    return l;
}