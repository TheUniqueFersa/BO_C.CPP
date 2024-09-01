#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int a,b;
    cin >> a;
    cin >> b;
    if(a != 1 && b != 1)
        cout << 1 << '\n';
    else {
        if(a*2<b){
            cout << a*2 << '\n';
        } else 
            cout << a+b << '\n';
    }

}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}