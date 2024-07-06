#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int w; 
    cin >> w;
    if(w==2)
        cout << "NO";
    else 
        printf("%s", (w%2 == 0)? "YES": "NO");
}

int main() {
    fastIo();
    solve();
}