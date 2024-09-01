#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, l;
    cin >> n;
    cin >> l;
    vector<int> a(n,0), b((n-1),0);
    for(int i; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n-1; i++){
        b[i] = abs(a[i] - a[i+1])-1;
    }
    int init = 0, end =0;
    if(a[0] != 0){
        init = a[0];
    }
    if(a[n-1] != l){
        end = l-a[n-1];
    }
    cout << "A:'\n";
    for(auto each: a){
        cout << each <<'\n';
    }
    cout << "B: '\n";
    for(auto each: b){
        cout << each <<'\n';
    }
    int max=0;
    for(auto each: b){
        if (each > max)
            max = each;
    }
    float d;
    cout << max << " " << init << " " << end << " " << '\n';
    if(init >= max || end >= max){
        if(init > end)
            cout << init << '\n';
        else 
            cout << end << '\n';
    } else {
        d = float(max)/2;
        cout << d << '\n';
    }
}

int main() {
    fastIo();
    solve();
}