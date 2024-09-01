#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int evenOrOdd(int n){
    return n%2 == 0;//even: 1 odd: 0
}
void solve() {
    int n, k, m;
    bool flag = false;
    cin >> n;
    cin >> k;
    m = n;
    
    if(evenOrOdd(n)){
        cout << "YES" << '\n';
    } else {
        if(n%k==0){
            cout << "YES" << '\n';
        } else {
            while(m>0 && !flag){
                m-=k;
                if(m>0){
                    if(evenOrOdd(m)){
                        flag = true;
                    }
                } else {
                    if(m==0)
                        flag = true;
                }
            }
            if(flag){
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
        
    } 
}

int main() {
    fastIo();
    int t=0;
    cin >> t;
    for(int i = 0; i<t; i++) solve();
}