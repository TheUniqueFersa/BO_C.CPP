#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    cin >> s;
    // ". 0"
    // "-. 1"
    // "-- 2"
    int i=0;
    while (i<s.length()){
        if(s[i] == '.'){
            cout << 0;
            i++;
        } else {
            if(s[i+1] == '.')
                cout << 1;
            else cout << 2;
            i+=2;
        }
    }
    cout << '\n';
}

int main() {
    fastIo();
    solve();
    return 0;
}