#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> v={7,6,8,9};
    
    //Imprimir vector 1
    cout << "Vector 1: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n\nIngresar tamaño de vector 2: ";

    cin >> n;

    vector<int> v2(n);

    cout << "\nIngresar valores de vector:";

    for(int i = 0; i < n; i++){
        cin >> v2[i];
    }

    v2.push_back(100);
    v2.push_back(200);
    cout << endl;

    //Imprimir el vector 2
    cout << "Vector 2: ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }


    //Ordenar vectores
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    
    cout << "\nVector 1 ordenado: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\nVector 2 ordenado: ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }


    cout << endl << endl; 


    v.insert(v.begin()+2,{300,400});

    cout << "Vector 1 modificado: ";
    for(auto x:v){
        cout << x << " ";
    }


    v.erase(v.begin()+1);

    cout << "\n\nVector 1 elemento eliminado: ";
    for(auto x:v){
        cout << x << " ";
    }

    

}