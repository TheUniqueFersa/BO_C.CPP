#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void add_nodo(map<int, vector<int>>& g, int i, int n){
    // cout << n << ' ';
    // if(g.find(n)!=g.end())
    for(auto each:g){
        if(count(each.second.begin(), each.second.end(), n) > 0){
            add_nodo(g, each.first, i);
            break;//I'm sorryyyy
        }
    }
    if(n!=-1)
        g[n].push_back(i);
    // for(auto each : g[n]){
    //     cout << each << ' ';
    // }
    // cout << '\n';
}
typedef vector<vector<int>> graph;

void solve() {
    int n, i;
    cin >> n;
    int arr[n+1];
    map<int, vector<int>> g;
    for(i = 1; i<=n; i++){
        cin >> arr[i];
    }
    for(i = 1; i<=n; i++){
        // cout << arr[i] << '\n';
        add_nodo(g, i, arr[i]);
    }
    // for(auto eacch : g){
    //     cout << "El numero: " << eacch.first << " es padre de: ";
    //     for(auto each : g[i]){
    //         cout << each << ' ';
    //     }
    //     cout << '\n';
    // }
    // cout << "Ya pues: ";
    // while (true){
        // cin >> i;
        // cout << g[1].size();
        // for(auto each:g[1]){
        //     cout << each << ' ';
        // }
        // cout << '\n';
    // }
    int max = 0;
    for(auto& each:g){
        vector<int>& temp = each.second;
        if(temp.size() > max)
            max = temp.size();
    }
    cout << max;
    
}

int main() {
    fastIo();
    solve();
}