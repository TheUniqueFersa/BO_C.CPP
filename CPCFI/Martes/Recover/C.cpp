#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, inc;
    cin >> n;
    deque<int> q;
    for(int i = 0; i< n; i++){
        cin >> inc;
        q.push_back(inc);
    }
    sort(q.begin(), q.end());
    int k = 1;
    bool flag = true;
    while(!q.empty() && flag){
        if(!q.back() <= k){
            if(q.front()>=k){
                q.pop_front();
                // if(!q.empty())
                    k++;
            } else {
                q.pop_front();
            }
        } else flag = false;
    }
    cout << k-1 << '\n';
        
}

int main() {
    fastIo();
    solve();
}