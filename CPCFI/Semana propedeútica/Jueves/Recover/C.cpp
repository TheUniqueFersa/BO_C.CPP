#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int miniBeauty(vector<int>& v, int i, int * n){
    // cout << "\n i: " << i << v[i] << " " << v[i-1];
    if(i == *n - 1)
        return (v[i] - v[i-1]);
    else 
        return (v[i] - v[i-1]) + miniBeauty(v, i+1, n);
}

void solve() {
    int n, i=1,inc;
    cin >> n;
    vector<int> v;
    for(int j=0; j<n; j++){
        cin >> inc;
        v.push_back(inc);
    }
    sort(v.begin(), v.end());
    // for(int o=0; o<n;o++)
    //     cout << v[o];
    cout << miniBeauty(v, i, &n) << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}