#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define MOD 1
#define TAM 10000000 + 7
int t(int a){
    if(a<0)
        return 0;
    if(ya[a])  return dp[a];
    ya[a] = 1;
    //dp[a] = 0;
    for(int i = 0; i<=6; i++){
        dp[a]+=t(a-i);
        dp[a]%=MOD;
    }
    return dp[a];
}

void solve() {
    int a;
    cin >> a;
    bool ya[TAM];
    vector<int> dp(TAM, 0);
    
    cout << t(a);
}

int main() {
    fastIo();
    solve();
}