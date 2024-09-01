#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int x, y;
    cin >> x;
    cin >> y;

    if(x>y) 
        cout << x << " " << y << "\n";
    else 
        cout << y << " " << x << "\n";
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}