#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, i, last;
    cin >> n;
    int a[n+1];
    bool flag = true;
    vector<int> pila;
    for(int j = 1; j<=n; j++){
        flag = true;
        i=j;
        while(flag){
            if(find(pila.begin(), pila.end(), a[i]) != pila.end()){
                flag  = false;
                // last = find(pila.begin(), pila.end(), a[i]);
            } else {
                pila.push_back(a[i]);
                i++;
            }
        } 
        cout << a[i] << ' ';
    }
    cout << '\n';

}

int main() {
    fastIo();
    solve();
}