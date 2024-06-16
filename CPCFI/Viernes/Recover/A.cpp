#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef vector<vector<int>> graph;

vector<int> path;
vector<int> visited;

void dfs(graph &g, int n, int * max, int * new_max){//graph and node
    path.push_back(n);
    visited[n] = 1;
    for(auto each_node : g[n]){
        if(visited[each_node] != 1){
            (*new_max)++;
            dfs(g, each_node, max, new_max);
            (*new_max)--;
        } else {
            if((*new_max > *max) && g[n].size() < 2){
                *max = *new_max;
                //*new_max = 1;
            }
        }
    }
}
void solve() {
    int n, i;
    cin >> n;
    int a[n+1];
    graph g;
    vector<int> candidates, uppermost;
    int max=1, new_max=1; 
    visited.assign(n+1, 0);
    g.assign(n+1, vector<int>());//empty vector??
    for(i = 1; i<=n; i++){
        cin >> a[i];
    }
    for(i=1; i<=n; i++){
        if(a[i]!=-1){
            g[i].push_back(a[i]);
            g[a[i]].push_back(i);
        } else {
            candidates.push_back(i);
        }
    }
    for(auto each_node : g){
        sort(each_node.begin(), each_node.end());
    }
    for(auto each:candidates){
        if(g[each].size()>0)
            uppermost.push_back(each);
    }
    for(auto each:uppermost){
        // cout << "Soy i=" << each << " " << max << " " << new_max << "\n";
        // cout << each << '\n';
        dfs(g, each, &max, &new_max);
    }
    // if(max >= 3)
    //     cout << 3 << '\n'; //if this is the issue ima cry
    // else 
    //     cout << max << '\n';
    cout << max << '\n';
}

int main() {
    fastIo();
    solve();
}