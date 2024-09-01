#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, k;
    cin >> n;
    cin >> k;
    int map[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
        }
    }
    int terr, ks = 0;
    for(int i=0; i<=n-k; i++){
        for(int j=0; j<=n-k; j++){
            terr = map[i][j];
            if(map[i+(k-1)][j] == terr && map[i][j+(k-1)] == terr && map[i+(k-1)][j+(k-1)] == terr)
                ks++;
        }
    }
    cout << ks << '\n';
}

int main() {
    fastIo();
    solve();
}