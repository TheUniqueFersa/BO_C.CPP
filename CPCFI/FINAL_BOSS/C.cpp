#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef vector<vector<int>> graph;
typedef vector<int> vec;

bool flag  =false;
int local_level = 0;

void dfs(graph &g, int n, vec & path, vec& visited){//graph and node
    path.push_back(n);
    visited[n] = 1;
    for(auto each_node : g[n]){
        if(visited[each_node] != 1){
            dfs(g, each_node, path, visited);
        }
    }
}

void depthFirstSearch(graph &g, vec& visited, vec& path, int n, int f){//graph and node
    if(flag)
        path.push_back(n);
    visited[n] = 1;
    for(auto each_node : g[n]){
        if(visited[each_node] != 1 && each_node == f){
            flag = true;
        }
        if(visited[each_node] != 1){
            if(flag)
                local_level++;
            depthFirstSearch(g, visited, path, each_node, f);
            if(flag)
                local_level--;
            if(local_level == 0)
                flag = false;
            // cout << "Local_level: " << local_level << ", " << flag << ", "<< n << '\n';
        }
    }
}

void solve() {
    int n, q, u, k, i, inc;
    graph g;
    vector<int> path;
    vector<int> visited;
    cin >> n;
    cin >> q;
    g.assign(n+1, vector<int>());
    
    for(i=2; i<=n; i++){
        cin >> inc;
        g[i].push_back(inc);
        g[inc].push_back(i);
    }
    for(i=0; i<q; i++){
        cin >> u;
        cin >> k;
        while(!path.empty())
            path.pop_back();
        visited.assign(n+1, 0);
        if(u==1){
            dfs(g, 1, path, visited);
        } else {
            depthFirstSearch(g, visited, path, 1, u);
        }        
        // cout << "LSN: " << path.size() << '\n';
        // for(auto each:path)
        //     cout << each << " ";
        // cout << '\n';
        if(path.size() < k)
            cout << -1 << '\n';
        else {
            cout << path[k-1] << '\n';
        }
    }
    // cout << "TF: " << local_level << "  " <<flag << '\n';
    // for(auto each:path){
    //     cout << each << " " << '\n';
    // }
}

int main() {
    fastIo();
    solve();
}