#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int statement, x=0;
    string s;
    cin >> statement;
    for(int i = 0; i<statement; i++){
        cin >> s;
        if(s[0] == '+' || s[2] == '+')
            x++;
        else x--;
    }
    cout << x;
    
}

int main() {
    fastIo();
    solve();
    return 0;
}