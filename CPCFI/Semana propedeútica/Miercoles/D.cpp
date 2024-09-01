#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    cin >> x;
    string str = to_string(x);
    int i = 0, ganador=0;
    bool bandera;
    bandera = false;
    if(n%2==1){
        while(i<n && bandera == false){
            if((str[i]-'0')%2==1){
                bandera = true;
                ganador = 1;
            }
            i+=2;
        }
        if(ganador == 0)
            ganador = 2;
    } else {
        i=1; bandera = false;
        while(i<n &&bandera == false){
            if((str[i]-'0') % 2 == 0){
                bandera = true;
                ganador = 2;
            }
            i+=2;
        }
        if (ganador == 0)
            ganador = 1;
    }
    cout << ganador << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}