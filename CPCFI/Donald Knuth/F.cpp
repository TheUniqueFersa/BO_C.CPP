#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >>  n;
    if(n<=9){
        cout << "Individual" << endl;
    } else 
        cout << "Team" << endl;
}

int main() {
    fastIo();
    solve();
}