#include <stdio.h>
#include "./../stdc/stdc.h"

typedef int MODO;
#define FRONT -1
// #define 
#define BACK 1

typedef struct lista Lista;
typedef struct nodo Nodo;
typedef struct usuario{
    char * nombre;
    char * nickname;
    int edad;
    int pts;
    char * lenguaje;
} Usuario;
struct nodo {
    Usuario user;
    Nodo * ant;//anterior
    Nodo * sig;//siguiente
};
struct lista {
    Nodo * h; //head
    Nodo * t; //tail
    int length;
};

int listaVacia(Lista* l);
//Inicializar lista
Usuario solicitarUsuario();
Nodo *crearNodo();
void añadirNodo(Lista* l, Nodo* n, MODO m);
Lista* iniciarLista();