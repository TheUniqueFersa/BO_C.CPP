#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

#include <cmath>

string print_n_s(string s, int n){
    int logg = log(n) / log(2);
    // cout << logg << '\n';
    n -= pow(2, logg);
    // cout << n << '\n';

    // for(int i=0; i<logg; i++)
    //     s+=s;
    if(n>1){
        print_n_s("s", n);
    }
    string str(n, 's');
    return str;
    cout << s;
}

void solve() {
    ll int n;
    cin >> n;
    // cout << "codeforces";
    // string str(n, 's');
    print_n_s("s", n);
    
    // if(n>1){
    //     for(auto i:str)
    //         cout << i;
    // }
    // cout << str;
}

int main() {
    fastIo();
    solve();
    return 0;
}