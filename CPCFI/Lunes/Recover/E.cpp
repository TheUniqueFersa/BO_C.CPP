#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <queue>

void solve() {
    int n, k, inc, sum =0, i;
    deque<int> a, b;
    cin >> n;
    cin >> k;
    for(i = 0; i<n; i++){
        cin >> inc;
        a.push_back(inc);
    }
    for(i = 0; i<n; i++){
        cin >> inc;
        b.push_back(inc);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // for(i = 0; i<n; i++){
    //     cout << a[i] << ' ' << b[i] <<'\n';
    // }
    bool flag = false;
    i=0;
    while (i<k && !flag){
        if(a.front() < b.back()){
            inc = b.back();
            a.push_back(inc);
            a.pop_front();
            b.pop_back();
        } else flag = true;
        i++;
    }
    for(int i=0; i<n; i++)
        sum += a[i];
        
    cout << sum << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}