#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    ll n;
    cin >> n;
    if(n%2==1)
        cout << 1 << '\n';
    else 
        cout << 2 << '\n';
}

int main() {
    fastIo();
    solve();
}