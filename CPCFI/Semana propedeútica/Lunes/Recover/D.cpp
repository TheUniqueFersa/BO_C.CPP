#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <string>

void solve() {
    string str;
    getline(cin, str);
    int coinc=0;
    if(count(str.begin(), str.end(), 'Q') >= 2 && count(str.begin(), str.end(), 'A') >=1){
        int q,a,q_2;
        q = str.find('Q');
        // cout << q << " "; 
        while(q>=0){
            a=str.find('A', q);
            // cout << a << " "; 
            while(a>0){
                q_2 = str.find('Q', a);
                // cout << q_2 << " "; 
                if(q_2>0){
                    coinc+=count(str.begin() + a, str.end(), 'Q');
                }
                a = str.find('A', a+1);
            }
            q = str.find('Q', q+1);
        }
    }
    cout << coinc << '\n';
}

int main() {
    fastIo();
    solve();
}