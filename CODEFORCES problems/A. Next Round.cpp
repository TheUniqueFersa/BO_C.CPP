#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, k, nr_players=0;
    cin >> n;
    cin >> k;
    int a[n], max, i;
    bool bandera = true;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    max = a[k-1];
    i=0;
    while(i<n && bandera){
        if(a[i]>=max && a[i]>0)
            nr_players++;
        else 
            bandera = false;
        i++;
    } 
    cout << nr_players;
    
}

int main() {
    fastIo();
    solve();
    return 0;
}