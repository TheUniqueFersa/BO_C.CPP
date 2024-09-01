#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    string str;
    int n, x;
    cin >> n;
    // getline(cin, str);
    cin >> str;
    int c = count(str.begin(), str.end(), '1');
    if(n>2){
        if(c%2==1)
            cout << "NO\n";
        else{
            if(c==2){
                x = str.find('1');
                if(str[x] != str[x+1])
                    cout << "YES\n";
                else
                    cout << "NO\n";
            } else cout << "YES\n";
        }
    } else if(n<=2 && n>0) {
        if(c==0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}