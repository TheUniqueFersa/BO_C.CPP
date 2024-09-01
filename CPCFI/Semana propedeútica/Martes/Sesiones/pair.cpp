#include <iostream>
#include <utility>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p1;

    p1.first = 10;
    p1.second = "diez";

    cout << "Primer elemento: " << p1.first << "     " << "Segundo elemento: " << p1.second << endl;

    //Otra forma para declarar

    pair<int,string>p2(20,"veinte");

    cout << "Primer elemento: " << p2.first << "     " << "Segundo elemento: " << p2.second << endl;
    

    pair<int,string>p3;

    int x = 30;
    string z = "treinta";
    
    p3 = make_pair(x,z);

    cout << "Primer elemento: " << p3.first << "     " << "Segundo elemento: " << p3.second << endl;
    
    //Realizar swap
    cout << "\n\nPar 3 despues del swap: \n\n";

    p3.swap(p2);

    cout << "Primer elemento: " << p3.first << "     " << "Segundo elemento: " << p3.second << endl;

    //Descomprimir elementos
    int a;
    string b; 
    
    cout << endl;
    cout << "Separar elementos: \n\n";
    tie(a,b) = p1;

    cout << "elemento a: " << a << endl;
    cout << "elemento b: " << b << endl;

    cout << endl;

    cout << "Separar elemento ignorando el elemento b: \n\n";
    tie(a,ignore) = p2;

    cout << "elemento a: " << a << endl;
    cout << "elemento b: " << b << endl;
}