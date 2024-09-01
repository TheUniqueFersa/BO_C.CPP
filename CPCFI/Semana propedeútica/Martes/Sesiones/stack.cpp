#include <iostream>
#include <stack>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Crear una pila de enteros
    stack<int> pila;

    // Agregar elementos a la pila
    pila.push(10);
    pila.push(30);
    pila.push(20);
    pila.push(50);
    pila.push(40);
    

    // Crear una copia de la pila original
    stack<int> pilacopia = pila;

    // Mostrar los elementos de la pila original
    cout << "Elementos en la pila original:" << std::endl;

    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    // Mostrar los elementos de la pila copiada
    cout << "Elementos en la pila copiada:" << endl;
    while (!pilacopia.empty()) {
        cout << pilacopia.top() << " ";
        pilacopia.pop();
    }
    cout << endl;

    // Comprobar si la pila copiada está vacía
    if (pilacopia.empty()) {
        cout << "La pila copiada esta vacia." << endl;
    } else {
        cout << "La pila copiada no esta vacia." << endl;
    }

    return 0;
}
