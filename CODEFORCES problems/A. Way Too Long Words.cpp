#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string s;
    cin >> s;//We should find a better way...
    int max = s.length(), inter;
    if(max>10){
        char limS = s[0], limI = s[s.length()-1];
        inter = s.length()-2;
        cout << limS << inter << limI << '\n';
    }
    else{
        cout << s << '\n';
    }
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i=0; i<t; i++) solve();
    return 0;
}