#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define MOD 1000000000 + 7
#define TAM A
int t(int a, vector<bool> &ya, vector<int> &dp){
    if(a<0)
        return 0;
    if(ya[a])  return dp[a];
    ya[a] = 1;
    //dp[a] = 0;
    for(int i = 0; i<=6; i++){
        dp[a]+=t(a-i, ya, dp);
        dp[a]%=MOD;
    }
    return dp[a];
}

void solve() {
    int a;
    cin >> a;
    vector<bool> ya(a+1, 0);
    vector<int> dp(a+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    ya[0] = ya[1] = 1;
    for(int i=2; i<=a; i++){
        t(i, ya, dp);
    }
    
    cout << dp[a];
}

int main() {
    fastIo();
    solve();
}