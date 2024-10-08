#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m, rooms = 0;
    cin >> n >> m;
    char mapB[n][m];
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    stack<pair<int, int>> pila;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            
            if(a[i][j] == "."){
                pila.push({i,j});
                while(!pila.empty())[
                    pair<int, int> ubi;
                    ubi = pila.top();
                    if(ubi.first+1 < n){
                        if(a[ubi.first + 1][ubi.second] == "."){
                            pila.push({i+1, j});
                        }                        
                    }
                    if(ubi.second+1 < m){
                        if(a[ubi.first + 1][ubi.second] == "."){
                            pila.push({i, j+1});
                        }                        
                    }
                    a[ubi.first][bi.second] = '#';
                ]
            }
            room++;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}   