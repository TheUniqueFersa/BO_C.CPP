#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, bills = 0, i=0;
    cin >> n;
    vector<int>d_b = {15,10,6,3,1};
    int div;
    while(i<5 && n != 0){
        // cout << n << " " << d_b[i]<< " " << i << '\n';
        div = n/d_b[i];
        if(div >= 1){
            bills += div;
            n = n - d_b[i]*div;
        } else{
            if(i<d_b.size())
                i++;
        }
    }
    cout << bills << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}