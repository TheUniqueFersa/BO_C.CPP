#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <string>   

int main() {
    fastIo();
    int size;
    string cadena;
    cin >> cadena;
    size = cadena.length();
    int i=0;
    while(i<size){
        if (cadena[i] >= 65 && cadena[i] <= 90)
            cadena[i]+=32;
        if(cadena[i] == 'a' || cadena[i] == 'o' || cadena[i] == 'y' || cadena[i] == 'e' || cadena[i] == 'u' || cadena[i] == 'i'){
            cadena.erase(i, 1);
            size--;
        }
        else if(i < size){
            cadena.insert(i, ".");
            size++;
            i+=2;
        }
    }
    cout << cadena;
}