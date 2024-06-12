#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int imp, posible, trash;
    cin >> imp;
    // string trash;
    posible = 10-(imp+1);
    int sum = posible;
    //getline(cin, trash);
    for(int j=0; j<imp; j++){
        cin >> trash;
    }
    while(posible > 1){
        sum+=posible-1;
        posible--;
        // cout<<sum<<"cada\n";
    }
    cout << 6 * sum << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}