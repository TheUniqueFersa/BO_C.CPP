#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> dq;
    //Agregar elementos
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    //Imprimir
    cout << "Elementos: \n";

    for(int i=0; i < dq.size(); i++){
        cout << "[" << dq[i] << "]" << " ";

    }
    cout << endl;

    dq.pop_front(); //Elimina el primer elemento
    dq.pop_back(); //Elimina el último elemento

    cout << "Elementos despues de la eliminacion: \n";

    for(int i=0; i < dq.size(); i++){
        cout << "[" << dq[i] << "]" << " ";

    }
    cout << endl;


    //Imprimir elemento en posición especifica
    cout << "\nAgregar elemento en posicion especifica: \n";
    dq.insert(dq.begin()+2,25);

    for(int i=0; i < dq.size(); i++){
        cout << "[" << dq[i] << "]" << " ";

    }
    cout << endl;

    cout << "\nPrimer elemento: " << dq.front() << endl;

    cout << "Ultimo elemento: " << dq.back() << endl;

    cout << "deque vacio? " << (dq.empty() ? "Si" : "No") << endl;


    return 0;
}
