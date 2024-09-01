#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int isValid(string s){
    if(s[0] != 'Y' && s[0] != 'y')
        return 0;
    if(s[1] != 'E' && s[1] != 'e')
        return 0;
    if(s[2] != 'S' && s[2] != 's')
        return 0;
    return 1;
}

void solve() {
    string str;
    cin >> str;
    bool fallo=true;
    fallo = isValid(str);
    if(fallo != true)
        cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}