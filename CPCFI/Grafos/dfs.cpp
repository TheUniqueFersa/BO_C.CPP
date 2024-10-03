#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector<int> visitados;
vector<int> recorrido;

void dfs(int nodo) {
    recorrido.push_back(nodo);
    visitados[nodo] = 1;
    
    for (auto vecino : grafo[nodo]) {
        if (!visitados[vecino]) {
            dfs(vecino);
        }
    }
}

void solve() {
    int n = 6;
    
    grafo.assign(n + 1, vector<int>());
    visitados.assign(n + 1, 0);
    
    grafo[1] = {2, 4, 6};
    grafo[2] = {1, 3, 4};
    grafo[3] = {2, 5};
    grafo[4] = {1, 2, 5};
    grafo[5] = {3, 4};
    grafo[6] = {1};
    
    dfs(1);
    cout << "DFS: "; 
    for (auto nodo : recorrido) cout << nodo << ' ';
    cout << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}   