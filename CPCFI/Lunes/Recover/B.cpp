#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#include <set>

void solve() {
    int n, points = 0;
    string str;
    set<char> solved_p;
    cin >> n;
    cin >> str;
    for(int i = 0; i<n; i++){
        if (solved_p.count(str[i])>0)
            points++;
        else {
            solved_p.insert(str[i]);
            points+=2;
        }
    }
    cout << points << '\n';
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}