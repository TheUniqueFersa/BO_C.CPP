#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int>m;
    //Asignar elementos
    m[2] = 20;
    m[3] = 30;
    m[1] = 10;
    m[5] = 50;
    m[4] = 40;

    for(const auto& x: m){
        cout << "Clave: " << x.first << " " << "valor: "<< x.second << endl;
    }

    cout << "\n\nOtra forma de agregar elementos: \n\n";
    m.insert(pair<int,int>(6,60));
    m.insert(pair<int,int>(7,70));
    m.insert(pair<int,int>(8,80));

    for(const auto& x: m){
        cout << "Clave: " << x.first << " " << "valor: "<< x.second << endl;
    }

    //Eliminación de elementos

    m.erase(6);
    m.erase(7);
    m.erase(8);
    m.erase(m.begin());

    cout << "\nMapa con elementos ya eliminados: \n\n";

    for(const auto& x: m){
        cout << "Clave: " << x.first << " " << "valor: "<< x.second << endl;
    }

    if(m.count(4) > 0){
        cout << "\nLa clave se encuentra en el mapa" << endl;
    }
    else{
        cout << "\nLa clave no se encuentra en el mapa" << endl;
    }

    m.clear();

    if(m.empty()){
        cout << "\nEl mapa se encuentra vacio" <<endl;
    }
    else{
        cout << "\nEl mapa no se encuentra vacio" <<endl;
    }

}