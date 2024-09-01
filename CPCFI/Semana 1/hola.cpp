#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, min=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int act, next;
    for(int i=0; i<n-1; i++){
        act = a[i];
        next = a[i+1];
        if(a[i+1]<a[i]){
            while(a[i+1]<a[i]){
                a[i+1]++;
                min++;
            }
        }
            
    }
    cout << min << '\n';
    
}

int main() {
    fastIo();
    solve();
}