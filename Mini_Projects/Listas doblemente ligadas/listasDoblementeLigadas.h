typedef struct lista Lista;
typedef struct nodo Nodo;
typedef struct usuario Usuario;
struct usuario{
    char * nombre;
    char * nickname;
    int edad;
    int pts;
    char * lenguaje;
};
struct nodo {
    Usuario * p;
    Nodo * ant;//anterior
    Nodo * sig;//siguiente
};
struct lista {
    Nodo * h; //head
    Nodo * t; //tail
    int length;
};