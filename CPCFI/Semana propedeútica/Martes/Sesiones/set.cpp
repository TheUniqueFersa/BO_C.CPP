#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int>s;
    s.insert(10);
    s.insert(30);
    s.insert(50);
    s.insert(10);
    s.insert(40);
    s.insert(20);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.insert(40);

    cout << "Inserción de Elementos: \n\n";
    for(auto& num : s){
        cout << "[" << num << "]";
    }

    //Eliminacion de elementos

    cout << "\n\nEliminacion de elementos: \n\n";

    s.erase(30);
    s.erase(20);

    for(auto& num : s){
        cout << "[" << num << "]";
    }

    //Encontrar un número(devuelve 0 o 1)
    cout << endl;
    if (s.count(20) > 0){
        cout << "Se encuentra en el set" << endl;
    }
    else{
        cout << "No se encuentra en el set" << endl;
    }

}