#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int>cola1, cola2;

    //Agregar elemento de cola 1
    
    cola1.push(50);
    cola1.push(30);
    cola1.push(10);
    cola1.push(40);
    cola1.push(20);


    //Copiar cola 1
    queue<int>copia1 = cola1;

    //Imprimir cola 1 
    cout << "\n\nElemento de primer cola" << endl;
    while(!cola1.empty()){
        cout << "[" << cola1.front() << "" << "]";
        cola1.pop();
    }
    cout << endl;
    cout << "Elemento en el frente de la cola: " << copia1.front() << endl;
    cout << "Elemento en el final de la cola: " << copia1.back() << endl;

    //Agregar cola 2
    cola2.push(60);
    cola2.push(90);
    cola2.push(80);
    cola2.push(70);
    cola2.push(100);
    
    

    //Copiar cola 2
    queue<int>copia2 = cola2;

    //Imprimir cola 2
    cout << "\n\nElementos de segunda cola" << endl;
    while(!cola2.empty()){
        cout << "[" << cola2.front() << "" << "]";
        cola2.pop();
    }

    //Intercambiar cola1 por cola2
    copia1.swap(copia2);

    cout << "\n\nCola 1 despues del intercambio" << endl;

    while(!copia1.empty()){
        cout << "[" << copia1.front() << "" << "]";
        copia1.pop();
    }

    //Comprobar que esta vacio
    cout << "\n\nCola 1 vacio: " << cola1.empty() << endl;
    cout << "Cola 2 vacio: " << cola2.empty() << endl;
    cout << "Copia 2 vacio: " << copia2.empty() << endl;

    return 0;
}