#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


vector<vector<int>> grafo;
vector<int> visitados;
vector<int> recorrido;
queue<int> cola;

void bfs(int nodo) {
    recorrido.push_back(nodo);
    visitados[nodo] = 1;
    
    for (auto vecino : grafo[nodo]) {
        if (!visitados[vecino]) {
            cola.push(vecino);
        }
    } 
    
    while (!cola.empty()) {
        nodo = cola.front();
        cola.pop();
    
        if (!visitados[nodo]) {
            bfs(nodo);
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
    
    bfs(1);
    cout << "BFS: "; 
    for (auto nodo : recorrido) cout << nodo << ' ';
    cout << endl;
}
 

void solve() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){

    }
    vector<pair<int, int>> o;
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}