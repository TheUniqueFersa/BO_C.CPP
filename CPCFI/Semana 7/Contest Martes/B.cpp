#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, q;
    cin >> n;
    cin >> q;
    int a[n+1];
    ll ps[n+1];
    a[0] = 0;
    ps[0]=0;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
        ps[i] = a[i] + ps[i-1];
    }
    
    for(int i = 1; i<=q; i++){
        int j = 1;
        ll eq;
        cin >> eq;
        
        while(j<n+1){
            if(eq >= a[j])
                j++;
            else 
                break;
        }
        cout << ps[j-1] << " ";
        
        
    }
    cout << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}