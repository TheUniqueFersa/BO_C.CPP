#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <set>

void solve() {
    string move, s;
    cin >> move;
    // set<string> boxes; // o casillas nose
    char c_used = move[0], r_used = move[1];// c = 122;
    // cout << c;
    for (int i=0; i<8; i++){
        if(i+'1'!=r_used){
            cout << c_used+to_string(i+1) + '\n';
            // boxes.insert(c_used+to_string(i+1));
        }
        if(i+'a' != c_used){
            s = string(1, i+97);
            cout << s+r_used + '\n';
            // boxes.insert(s+r_used);
        }
    }
    // for(auto &each : boxes)
    //     cout << each + '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}