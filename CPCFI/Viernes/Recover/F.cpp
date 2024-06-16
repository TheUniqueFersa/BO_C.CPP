#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef vector<vector<int>> graph;

void solve() {
    int n, m, u, v, i, x=0, y=0;
    cin >> n;
    cin >> m;
    graph g;
    g.assign(m+2, vector<int>());
    for(i=1; i<=m; i++){
        cin >> u;
        cin >> v;
        if(find(g[u].begin(), g[u].end(), v) == g[u].end())
            g[u].push_back(v);
        if(find(g[v].begin(), g[v].end(), u) == g[v].end())
            g[v].push_back(u);
    }
    for(auto each:g){
        // cout << "[" ;
        // for(auto eachh : each){
        //     cout << eachh << ", ";
        // }
        // cout << "]";
        if(each.size()<2 && each.size() != 0)
            y++;
    }
    // cout << y;
    x = n - 1 - y;
    y = y/x;
    cout << x << " " << y << '\n';
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}