#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m, rooms = 0;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    stack<pair<int, int>> pila;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            
            if(a[i][j] == '.'){
                pila.push({i,j});
                while(!pila.empty()){
                    pair<int, int> ubi;
                    ubi = pila.top();
                    pila.pop();
                    if(ubi.first+1 < n){
                        if(a[ubi.first + 1][ubi.second] == '.'){
                            pila.push({ubi.first+1, ubi.second});
                        }                        
                    }
                    if(ubi.second+1 < m){
                        if(a[ubi.first][ubi.second+1] == '.'){
                            pila.push({ubi.first, ubi.second+1});
                        }                        
                    }
                    if(ubi.first-1 >= 0){
                        if(a[ubi.first - 1][ubi.second] == '.'){
                            pila.push({ubi.first-1, ubi.second});
                        }                        
                    }
                    if(ubi.second-1 >= 0){
                        if(a[ubi.first][ubi.second-1] == '.'){
                            pila.push({ubi.first, ubi.second-1});
                        }                        
                    }
                    a[ubi.first][ubi.second] = '#';
                }
                rooms++;
            }
        }
    }
    cout << rooms;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}   