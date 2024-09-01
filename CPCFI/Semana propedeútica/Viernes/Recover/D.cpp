#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
vector<vector<int>> visited, depths;
int revision = 0;

void checkDepthLake(int i, int j, int MAX_BOTTOM, int MAX_RIGHT, int& max, int& nm){ //nm stands for new max
    int MAX_TOP_LEFT =0;
    if(!visited[i][j]){
        visited[i][j] = 1;
        nm += depths[i][j];
        revision+=4;
        // cout << "["<<i<<"]"<< "["<<j<<"]"<< " " << nm << "and " << revision << '\n';
        if(i!=MAX_TOP_LEFT){//TOP
            if(!visited[i-1][j]){
                checkDepthLake(i-1, j, MAX_BOTTOM, MAX_RIGHT, max, nm);
            }
        }
        if(j!=MAX_TOP_LEFT){//LEFT
            if(!visited[i][j-1]){
                checkDepthLake(i, j-1, MAX_BOTTOM, MAX_RIGHT, max, nm);
            }
                
        }
        if(i!=MAX_BOTTOM){// BOTTOM
            if(!visited[i+1][j]){
                checkDepthLake(i+1, j, MAX_BOTTOM, MAX_RIGHT, max, nm);
            }
        }
        if(j!=MAX_RIGHT){ //RIGHT
            if(!visited[i][j+1]){
                checkDepthLake(i, j+1, MAX_BOTTOM, MAX_RIGHT, max, nm);
            }
        }
        revision-=4;
        if(nm > max)
            max = nm;        
        if(revision == 0)
            nm = 0;
    }
}

void solve() {
    int n, m, max_depth = 0, new_max = 0;
    cin >> n;
    cin >> m;
    // int visited[n][m];
    // int depths[n][m];
    visited.assign(n, vector<int>(m, 0));
    depths.assign(n, vector<int>(m, 0));

    bool flag = true;
    vector<pair<int, int>> candidates;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> depths[i][j];
            if(depths[i][j]>0){
                flag = false;
                visited[i][j] = 0;
                pair<int, int> inc;
                inc.first = i;
                inc.second = j;
                candidates.push_back(inc);
            }
            else{
                visited[i][j] = 1;
            }
        }
    }
    // cout << "\n\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m;j++){
    //         cout << visited[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    if(!flag){
        for(auto each:candidates){
            checkDepthLake(each.first, each.second, n-1, m-1, max_depth, new_max);
        }
        cout << max_depth << '\n';
    } else cout << 0 << '\n';
    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m;j++){
    //         cout << depths[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}