#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    string s1, s2;
    map<string, string> mp;
    for(int i = 0; i < n; i++) {
        cin >> s1;
        cin >> s2;
        mp[s1] = s2;
    }
    string p;
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> s1;
        p = "";
        for(int j = 0; j<s1.size(); j++) {
            //es un digito
            if(s1[j] >= 48 && s1[j] <= 57) {
                p.append("d");
            } else if(s1[j] >= 97 && s1[j] <= 122) {
                p.append("l");
            } else if(s1[j] >= 65 && s1[j] <= 90) {
                p.append("u");
            }
        }
        if(mp.find(p) != mp.end()) {
            cout << mp[p];
        } else 
            cout << "Liar!" << '\n';
        
    }
    //48-57// digitos
    //65-90// mayusculas
    //97-122// minuscula

}

int main() {
    fastIo();
    solve();
}