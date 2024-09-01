#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, bills = 0, i=0;
    cin >> n;
    int d_b[5] = {100, 20, 10, 5, 1};
    int div;
    while(i<5 && n != 0){
        // cout << n << " " << d_b[i]<< " " << i << '\n';
        div = n/d_b[i];
        if(div >= 1){
            bills += div;
            n = n - d_b[i]*div;
        } else{
            if(i<5)
                i++;
        }
    }
    cout << bills << '\n';
}

int main() {
    fastIo();
    solve();
}